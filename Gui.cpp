/* 
 * File:   Gui.cpp
 * Author: piotr
 * 
 * Created on 2 kwiecień 2012, 21:12
 */

#include <vector>

#include "Gui.h"
#include "obiekt.h"
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
    createPlot(layout);

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
    typGeneratoraCombo->addItem("prostokatny", QVariant("prostokatny"));
    typGeneratoraCombo->addItem("skok", QVariant("skok"));
    typGeneratoraCombo->addItem("staly", QVariant("staly"));
    typGeneratoraCombo->addItem("sinusoidalny", QVariant("sinusoidalny"));
    typGeneratoraCombo->addItem("sraka", QVariant("sraka"));
    connect(typGeneratoraCombo, SIGNAL(currentIndexChanged(int)), this, SLOT(changeGenerator()));
    layout->addWidget(typGeneratoraCombo);
}

void Gui::changeGenerator()
{
    string typGeneratora = typGeneratoraCombo->itemData(typGeneratoraCombo->currentIndex()).toString().toStdString();
    cout << "change Generator " << typGeneratora << endl;
    if (isConfigLoaded) {
        run(typGeneratora);
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
    wykresWejscie->xAxis->setRange(*min_element(x.begin(), x.end()), *max_element(x.begin(), x.end()) + 1);
    wykresWejscie->yAxis->setRange(0, *max_element(wejscie.begin(), wejscie.end()) + 1);
    wykresWyjscie->xAxis->setRange(*min_element(x.begin(), x.end()), *max_element(x.begin(), x.end()) + 1);
    wykresWyjscie->yAxis->setRange(*min_element(wyjscie.begin(), wyjscie.end()), *max_element(wyjscie.begin(), wyjscie.end()) + 1);
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
            string typGeneratora = typGeneratoraCombo->itemData(typGeneratoraCombo->currentIndex()).toString().toStdString();
            run(typGeneratora);
         }
     }
}
void Gui::run(string typGeneratora)
{
    try {
        ObiektARX arx(config.k, config.A, config.B);
        RegulatorP regulatorP(2);
        const long liczbaProbek = 100;

        FabrykaGenerator fabryka;
        ParametryGeneratora parametryGeneratora;
        GeneratorWejscia* generatorWejscia = fabryka.pobierzGenerator(typGeneratora, 1, 0);
        generatorWejscia->Probki = 1;
        generatorWejscia->l = 0;

        parametryGeneratora.Amplituda = 5.0;
        parametryGeneratora.ChwilaSkoku = 1;
        parametryGeneratora.Okres = 1;
        parametryGeneratora.Wypelnienie = 5.0;

        double wej = 0;
        double wyj;

        QVector<double> x, wejscie, wyjscie;

        for(int i = 1; i < liczbaProbek; i++){
            x.push_back(i);
            wyj = arx.symuluj(regulatorP.symuluj(wej, generatorWejscia->GenWartZad(parametryGeneratora)));
            wyjscie.push_back(wyj);
            wejscie.push_back(wej);
            cout << "Wejscie: " << wej << " Wyjscie: " << wyj << endl;
            wej = wyj; // zapętlenie regulatorów
        }

        redrawPlot(x, wejscie, wyjscie);
    } catch (string exception) {
        cout << "Wystapil wyjatek: " << exception << endl;
        QMessageBox msgBox;
        msgBox.setText("Wystapil blad");
        msgBox.exec();
    }
}