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
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <stdlib.h>
#include "konfiguracja.h"
#include "qcustomplot.h"

class Gui : public QWidget
{
    Q_OBJECT
    
    public:
        Gui(QWidget *parent = 0);
    public slots:
        void loadFromFile();
    private:
        void createConfigButton(QLayout *layout);
        void createPlot(QLayout *layout);
        QPushButton *loadButton;
        konfiguracja konfig;
};

#endif	/* GUI_H */

