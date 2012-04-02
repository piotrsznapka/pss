/* 
 * File:   Gui.h
 * Author: piotr
 *
 * Created on 2 kwiecień 2012, 21:12
 */

#ifndef GUI_H
#define	GUI_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <boost/algorithm/string.hpp>
#include <stdlib.h>

class Gui : public QWidget
{
    Q_OBJECT
    
    public:
        Gui(QWidget *parent = 0);
    public slots:
        void loadFromFile();
    private:
        QPushButton *loadButton;

};

#endif	/* GUI_H */

