/* 
 * File:   Gui.h
 * Author: piotr
 *
 * Created on 2 kwiecień 2012, 21:12
 */

#ifndef GUI_H
#define	GUI_H

#include <QWidget>
#include <QLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QComboBox>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <stdlib.h>
#include "konfiguracja.h"
#include "qcustomplot.h"
#include <time.h>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QGroupBox>
#include "symulacja.h"
#include <QTimer>

class Gui : public QWidget
{
    Q_OBJECT
    
    public:
        Gui(QWidget *parent = 0);
    public slots:
        void loadFromFile();
        void changeGenerator();
        void run();
        void changeInterwal();
    private:
        void createConfigButton(QLayout *layout);
        void createTypGeneratoraCombo(QLayout *layout);
        void createInterwalTextEdit(QLayout *layout);
        void createPlot(QLayout *layout);
        void redrawPlot(QVector<double> x, QVector<double> wejscie, QVector<double> wyjscie);
        void startSim();
        
        QPushButton *loadButton;
        QPushButton *zmienInterwal;
        QComboBox *typGeneratoraCombo;
        QLineEdit *interwalText;
        QCustomPlot *wykresWejscie;
        QCustomPlot *wykresWyjscie;
        QTimer* timer;
        konfiguracja config;
        bool isConfigLoaded;
        int x;
        double wejscie;
        symulacja sim;
        QVector<double> xVector, wejscieVector, wyjscieVector;
};

#endif	/* GUI_H */