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

class Gui : public QWidget
{
    Q_OBJECT
    
    public:
        Gui(QWidget *parent = 0);
    public slots:
        void loadFromFile();
        void changeGenerator();
    private:
        void createConfigButton(QLayout *layout);
        void createTypGeneratoraCombo(QLayout *layout);
        void createPlot(QLayout *layout);
        void redrawPlot(QVector<double> x, QVector<double> wejscie, QVector<double> wyjscie);
        void run(string typGeneratora);
        QPushButton *loadButton;
        QComboBox *typGeneratoraCombo;
        QCustomPlot *wykresWejscie;
        QCustomPlot *wykresWyjscie;
        konfiguracja config;
        bool isConfigLoaded;
};

#endif	/* GUI_H */

