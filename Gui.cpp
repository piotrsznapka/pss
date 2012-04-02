/* 
 * File:   Gui.cpp
 * Author: piotr
 * 
 * Created on 2 kwiecień 2012, 21:12
 */

#include <vector>

#include "Gui.h"
using namespace std;
using namespace boost;
using namespace boost::property_tree;

Gui::Gui(QWidget *parent) : QWidget(parent)
{
    loadButton = new QPushButton(tr("Zaladuj konfiguracje z pliku"));
    connect(loadButton, SIGNAL(clicked()), this, SLOT(loadFromFile()));
    
    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(loadButton);
    setLayout(mainLayout);
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
             QMessageBox::information(this, tr("Unable to open file"),
                 file.errorString());
             return;
         }

        ptree pt;
        cout << "Czytam config z " << fileName.toStdString() << endl;
        ini_parser::read_ini(fileName.toStdString(), pt);
        int k = pt.get<int>("k");
        
        vector<string> wektor_A;
        vector<float> A;
        string temp_A = pt.get<string>("A");
        boost::split(wektor_A, temp_A, boost::is_any_of(";"));
        for (vector<string>::size_type i = 0; i != wektor_A.size(); i++) {
            cout << "wartosc wektora: " << wektor_A[i] << " c_str: " << wektor_A[i].c_str() << endl;
            A.push_back(strtod(wektor_A[i].c_str(), NULL));
        }
        cout << "Parametr k wynosi: " << k << endl;
        cout << "Wektor A posiada: " << A.size() << " elementów:  " << A[0] << " " << A[1] << endl;
        
     }
}
