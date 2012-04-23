/* 
 * File:   symulacja.cpp
 * Author: piotr
 * 
 * Created on 23 kwiecień 2012, 21:00
 */

#include "symulacja.h"
symulacja::symulacja()
{
    parametryGeneratora.Amplituda = 5.0;
    parametryGeneratora.ChwilaSkoku = 1;
    parametryGeneratora.Okres = 1;
    parametryGeneratora.Wypelnienie = 5.0;

}

wynikSymulacji symulacja::symuluj(double wejscie)
{
    wynikSymulacji wynik;
    wynik.wyjscieGeneratora = generator->GenWartZad(parametryGeneratora);
    double wyjscieRegulatora = regulator->symuluj(wejscie, wynik.wyjscieGeneratora);
    wynik.wyjscie = arx->symuluj(wyjscieRegulatora);

    cout << "Wejscie:\t" << wejscie << "\tWyjscie generatora (typ: " 
            << typGeneratora << "):\t" << wynik.wyjscieGeneratora 
            << "\tWyjscie:\t" << wynik.wyjscie << endl;
    return wynik;
}

void symulacja::setTypGeneratora(string typ)
{
    this->typGeneratora = typ;
}

void symulacja::setConfig(konfiguracja config)
{
    this->config = config;
}

void symulacja::init(konfiguracja config, string typ)
{  
    setConfig(config);
    setTypGeneratora(typ);    
    init();
}

void symulacja::init()
{  
    arx = new ObiektARX(config.k, config.A, config.B);
    regulator = new RegulatorP(config.k);
    generator = fabryka.pobierzGenerator(typGeneratora, 1, 0);
}
