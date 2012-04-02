#include <QApplication>
#include <QLabel>
#include <QtGui>
#include <fstream>
#include <iostream>
#include "obiekt.h"
#include "Gui.h"
#include <vector>
#include <sstream>


using namespace std;

int main(int argc, char *argv[])
{

    double wejscie;
    double wyjscie;
    // int k;
    vector <double> WielomianA;
    vector <double> WielomianB;
    //parametry obiektu:
    WielomianA.push_back(-1);
    WielomianA.push_back(-1.526);
    WielomianA.push_back(0.586);
    WielomianA.push_back(-0.0302);

    WielomianB.push_back(0.01126);
    WielomianB.push_back(0.0709);
    WielomianB.push_back(0.0366);
    WielomianB.push_back(0.001415);



    // obiekt klasy ARX
    int k = 2;
    ObiektARX Obiekt(k , WielomianA , WielomianB );

    wejscie = 3;
    for(int i = 0;i<10;i++){
        wyjscie = Obiekt.symuluj(wejscie);

        cout << "Wyjscie = " << wyjscie << endl;
    }    

    QApplication app(argc, argv);
    Gui regulatorGui;
    regulatorGui.show();
    return app.exec();
}