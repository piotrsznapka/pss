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

using namespace std;


Gui::Gui(QWidget *parent) : QWidget(parent)
{
    QGridLayout *layout = new QGridLayout();
    setLayout(layout);   
    setWindowTitle("Regulator");
    createConfigButton(layout);
    createPlot(layout);

}

void Gui::createConfigButton(QLayout *layout)
{
    loadButton = new QPushButton(tr("Zaladuj konfiguracje z pliku"));
    connect(loadButton, SIGNAL(clicked()), this, SLOT(loadFromFile()));
    layout->addWidget(loadButton);    
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
            konfiguracja config;
            config.czytaj(fileName.toStdString());
            run(config);
         }
     }
}

void Gui::run(konfiguracja config)
{
    ObiektARX arx(config.k, config.A, config.B);
    const long liczbaProbek = 10;
    const long maxRand = 10;
    srand(time(NULL));

    double wej;
    double wyj;
    QVector<double> x, wejscie, wyjscie;

    for(int i = 1; i < liczbaProbek; i++){
        x.push_back(i);
        wej = 5;
        wyj = arx.symuluj(wej);
        wyjscie.push_back(wyj);
        wejscie.push_back(wej);
        cout << "Wejscie: " << wej << " Wyjscie: " << wyj << endl;
    }
        
    redrawPlot(x, wejscie, wyjscie);
}