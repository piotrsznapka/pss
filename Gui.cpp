/* 
 * File:   Gui.cpp
 * Author: piotr
 * 
 * Created on 2 kwiecień 2012, 21:12
 */

#include <vector>

#include "Gui.h"
#include "obiekt.h"
#include "symulacja.h"
#include <qapplication.h>
#include <qlayout.h>
#include <qt4/QtGui/qcombobox.h>

using namespace std;


Gui::Gui(QWidget *parent) : QWidget(parent)
{
    isConfigLoaded = false;
    QGridLayout *layout = new QGridLayout();
    setLayout(layout);   
    setWindowTitle("Regulator");
    createConfigButton(layout);
    createTypGeneratoraCombo(layout);
    createInterwalTextEdit(layout);
    createPlot(layout);
    
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(run()));
}

void Gui::createConfigButton(QLayout *layout)
{
    loadButton = new QPushButton(tr("Zaladuj konfiguracje z pliku"));
    connect(loadButton, SIGNAL(clicked()), this, SLOT(loadFromFile()));
    layout->addWidget(loadButton);    
}


void Gui::createTypGeneratoraCombo(QLayout *layout)
{
    typGeneratoraCombo = new QComboBox();
    typGeneratoraCombo->addItem("staly", QVariant("staly"));
    typGeneratoraCombo->addItem("prostokatny", QVariant("prostokatny"));
    typGeneratoraCombo->addItem("skok", QVariant("skok"));
    typGeneratoraCombo->addItem("sinusoidalny", QVariant("sinusoidalny"));
    typGeneratoraCombo->addItem("Nie istniejacy typ", QVariant("ni ma"));
    connect(typGeneratoraCombo, SIGNAL(currentIndexChanged(int)), this, SLOT(changeGenerator()));
    layout->addWidget(typGeneratoraCombo);
}

void Gui::createInterwalTextEdit(QLayout *layout)
{
    QHBoxLayout *hlayout = new QHBoxLayout;
    QGroupBox *box = new QGroupBox;
    interwalText = new QLineEdit();
    interwalText->setText("100");
    QLabel* label = new QLabel(tr("Interwal probkowania (ms)"));
    zmienInterwal = new QPushButton("Zmien interwal");    
    connect(zmienInterwal, SIGNAL(clicked()), this, SLOT(changeInterwal()));
    
    hlayout->addWidget(label);
    hlayout->addWidget(interwalText);
    hlayout->addWidget(zmienInterwal);
    box->setLayout(hlayout);
    layout->addWidget(box);
}
void Gui::changeGenerator()
{
    string typGeneratora = typGeneratoraCombo->itemData(typGeneratoraCombo->currentIndex()).toString().toStdString();
    cout << "change Generator " << typGeneratora << endl;
    if (isConfigLoaded) {
        startSim();
    }
}

void Gui::changeInterwal()
{
    if (isConfigLoaded) {
        startSim();
    }
}
void Gui::createPlot(QLayout* layout)
{
    wykresWejscie = new QCustomPlot();
    wykresWejscie->setMinimumHeight(320);
    wykresWejscie->setMinimumWidth(800);
    
    wykresWejscie->addGraph();
    
    wykresWejscie->xAxis->setLabel("x");
    wykresWejscie->yAxis->setLabel("y");
    wykresWejscie->replot();

    layout->addWidget(wykresWejscie);
    
    wykresWyjscie = new QCustomPlot();
    wykresWyjscie->setMinimumHeight(320);
    wykresWyjscie->setMinimumWidth(800);
    
    wykresWyjscie->addGraph();
    
    wykresWyjscie->xAxis->setLabel("x");
    wykresWyjscie->yAxis->setLabel("y");
    wykresWyjscie->replot();

    layout->addWidget(wykresWyjscie);
}

void Gui::redrawPlot(QVector<double> x, QVector<double> wejscie, QVector<double> wyjscie)
{
    wykresWejscie->graph(0)->setData(x, wejscie);
    wykresWyjscie->graph(0)->setData(x, wyjscie);
    wykresWejscie->xAxis->setRange(*min_element(x.begin(), x.end()) - 1,
            *max_element(x.begin(), x.end()) + 1);
    wykresWejscie->yAxis->setRange(*min_element(wejscie.begin(), wejscie.end()) - 1,
            *max_element(wejscie.begin(), wejscie.end()) + 1);
    wykresWyjscie->xAxis->setRange(*min_element(x.begin(), x.end()) - 1,
            *max_element(x.begin(), x.end()) + 1);
    wykresWyjscie->yAxis->setRange(*min_element(wyjscie.begin(), wyjscie.end()) - 1,
            *max_element(wyjscie.begin(), wyjscie.end()) + 1);
    wykresWejscie->replot();
    wykresWyjscie->replot();
}

void Gui::loadFromFile()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Otworz konfiguracje z pliku INI"), "",
        tr("INI (*.ini);;All Files (*)"));

    if (fileName.isEmpty()) {
        return;
    } else {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this, tr("Nie mozna otworzyc pliku"),
                file.errorString());
            return;
        } else {
            config.czytaj(fileName.toStdString());
            isConfigLoaded = true;
            startSim();
        }
    }
}

void Gui::startSim()
{
    string typGeneratora = typGeneratoraCombo->itemData(
            typGeneratoraCombo->currentIndex()).toString().toStdString();

    sim.init(config, typGeneratora);
    timer->stop();
    timer->start(interwalText->text().toInt());
    cout << "Uruchamiam z typem generatora: " << typGeneratora
         << " i interwalem: " << interwalText->text().toStdString() << endl;    
}

void Gui::run()
{
    try {
        xVector.push_back(x);
        wynikSymulacji wynik = sim.symuluj(wejscie, x);
        wyjscieVector.push_back(wynik.wyjscieGeneratora);
        wejscieVector.push_back(wynik.wyjscie);
        wejscie = wynik.wyjscie; // zapętlenie regulatorów

        x += timer->interval();
        redrawPlot(xVector, wyjscieVector, wejscieVector);
    } catch (string exception) {
        cout << "Wystapil wyjatek: " << exception << endl;
        QMessageBox msgBox;
        msgBox.setText("Wystapil blad");
        msgBox.exec();
    }
}