/* 
 * File:   symulacja.h
 * Author: piotr
 *
 * Created on 23 kwiecień 2012, 21:00
 */

#ifndef SYMULACJA_H
#define	SYMULACJA_H
#include <stdio.h>
#include "generatory_wejscia.h"
#include "konfiguracja.h"
#include "obiekt.h"
#include "fabryki.h"

using namespace std;

class wynikSymulacji {
public:
    double wyjscie;
    double wyjscieGeneratora;
};

class symulacja {
public:
    symulacja();
    wynikSymulacji symuluj(double wejscie);
    void setTypGeneratora(string typ);
    void setTypRegulatora(string typ);
    void setConfig(konfiguracja config);
    void init(konfiguracja config, string typGeneratora, string typRegulatora);
    void init();
private:
    int licznik;
    
    string typGeneratora;
    string typRegulatora;
    konfiguracja config;
    
    ParametryGeneratora parametryGeneratora;
    FabrykaGenerator fabrykaGenerator;
    FabrykaRegulator fabrykaRegulator;
    
    ObiektARX* arx;
    Regulator* regulator;
    GeneratorWejscia* generator;
};

#endif	/* SYMULACJA_H */

