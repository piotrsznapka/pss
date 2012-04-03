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
#include <math.h>
#include <qt4/QtGui/qtoolbar.h>


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
    QCustomPlot *customPlot = new QCustomPlot();
    customPlot->setMinimumHeight(500);
    customPlot->setMinimumWidth(500);
    // generate some data:
    QVector<double> x(101), y(101); // initialize with 101 entries
    for (int i=0; i<101; ++i)
    {
        x[i] = i/50.0 - 1; // x goes from -1 to 1
        y[i] = x[i]*x[i]; // let's plot a quadratic function
    }
    
    customPlot->addGraph();
    customPlot->graph(0)->setData(x, y);
    // give the axes some labels:
    customPlot->xAxis->setLabel("x");
    customPlot->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    customPlot->xAxis->setRange(-1, 1);
    customPlot->yAxis->setRange(0, 1);
    customPlot->replot();

    layout->addWidget(customPlot);
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
            double wejscie = 3;
            double wyjscie;
            for(int i = 0;i<10;i++){
                wyjscie = arx.symuluj(wejscie);
                cout << "Wyjscie = " << wyjscie << endl;
            }
         }
     }
}