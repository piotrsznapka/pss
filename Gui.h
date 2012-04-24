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
        void startSim();
        void run();
    private:
        void createConfigButton(QLayout *layout);
        void createTypCombo(QLayout *layout);
        void createInterwalTextEdit(QLayout *layout);
        void createPlot(QLayout *layout);
        void redrawPlot(QVector<double> x, QVector<double> wejscie, QVector<double> wyjscie);
        
        QPushButton *loadButton;
        QPushButton *zmienInterwal;
        QComboBox *typGeneratoraCombo;
        QComboBox *typRegulatoraCombo;
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