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
    customPlot = new QCustomPlot();
    customPlot->setMinimumHeight(500);
    customPlot->setMinimumWidth(500);
    
    customPlot->addGraph();
    //customPlot->graph(0)->setData(x, y);
    
    customPlot->xAxis->setLabel("x");
    customPlot->yAxis->setLabel("y");
    customPlot->xAxis->setRange(0, 5);
    customPlot->yAxis->setRange(-5, -5);
    customPlot->replot();

    layout->addWidget(customPlot);
}

void Gui::redrawPlot(QVector<double> x, QVector<double> y)
{
    customPlot->graph(0)->setData(x, y);
    customPlot->xAxis->setRange(*min_element(x.begin(), x.end()), *max_element(x.begin(), x.end()));
    customPlot->yAxis->setRange(*min_element(y.begin(), y.end()), *max_element(y.begin(), y.end()));
    customPlot->replot();
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
            konfig.czytaj(fileName.toStdString());
            ObiektARX arx(konfig.k, konfig.A, konfig.B);
            const long maksymalneWejscie = 5;
            const double krok = 0.1;
            
            double wejscie;
            double wyjscie;
            QVector<double> x, y;
            for(double i = 0.1; i < maksymalneWejscie; i+= krok){
                wejscie = i;
                wyjscie = arx.symuluj(wejscie);
                x.push_back(i);
                y.push_back(wyjscie);
                cout << "Wejscie: " << wejscie << " Wyjscie: " << wyjscie << endl;
            }
            redrawPlot(x,y);
         }
     }
}