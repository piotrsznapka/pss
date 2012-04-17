/* 
 * File:   konfiguracja.cpp
 * Author: piotr
 * 
 * Created on 2 kwiecień 2012, 22:12
 */

#include "konfiguracja.h"

konfiguracja::konfiguracja() {
}

void konfiguracja::czytaj(string plik) {
    
    cout << "Czytam config z " << plik << endl;
    ini_parser::read_ini(plik, pt);
    
    k = pt.get<int>("k");
    cout << "Parametr k wynosi: " << k << endl;
    
    A = czytajWektor("A");
    B = czytajWektor("B");        
}

vector<double> konfiguracja::czytajWektor(string zmienna) {
    
    cout << "Czytam wektor: " << zmienna << endl;
    vector<string> wektor;
    vector<double> wynik;
    string temp = pt.get<string>(zmienna);
    boost::split(wektor, temp, boost::is_any_of(";"));
    for (vector<string>::size_type i = 0; i != wektor.size(); i++) {
        wynik.push_back(strtod(wektor[i].c_str(), NULL));
    }
    cout << "Wektor " << zmienna << " posiada: " << wynik.size()  << endl;
//    cout << "A=" << A(0) << endl;
//    cout << "B=" << B(0) << endl;
    return wynik;
}