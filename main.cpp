#include <QApplication>
#include <QLabel>
#include <QtGui>
#include <fstream>
#include <iostream>
#include "obiekt.h"
#include "Gui.h"
#include <sstream>


using namespace std;

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    Gui regulatorGui;
    regulatorGui.show();
    return app.exec();
}