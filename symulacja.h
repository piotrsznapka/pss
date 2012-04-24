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

using namespace std;

class wynikSymulacji {
public:
    double wyjscie;
    double wyjscieGeneratora;
};

class symulacja {
public:
    symulacja();
    wynikSymulacji symuluj(double wejscie, int probka);
    void setTypGeneratora(string typ);
    void setConfig(konfiguracja config);
    void init(konfiguracja config, string typ);
    void init();
private:
    string typGeneratora;
    konfiguracja config;
    
    ParametryGeneratora parametryGeneratora;
    FabrykaGenerator fabryka;
    
    ObiektARX* arx;
    RegulatorP* regulator;
    GeneratorWejscia* generator;
};

#endif	/* SYMULACJA_H */

