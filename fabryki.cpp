/* 
 * File:   fabryki.cpp
 * Author: piotr
 * 
 * Created on 24 kwiecień 2012, 23:16
 */

#include "fabryki.h"
#include "obiekt.h"

//Fabryka
GeneratorWejscia* FabrykaGenerator::pobierzGenerator(string typ, ParametryGeneratora parametry)
{
    GeneratorWejscia* generator;
    
    if (typ == "staly") {
        generator = new GeneratorSygnaluStalego();
    } else if (typ == "skok") {
        generator = new GeneratorSkokuJednostkowego();
    } else if (typ == "prostokatny") {
        generator = new GeneratorProstokatny();
    } else if (typ == "sinusoidalny") {
        generator = new GeneratorSinusoidalny();
    } else {
        throw "Nie znaleziono generatora o typie: " + typ;
    }
    
    generator->parametry = parametry;
    return generator;
}

Regulator* FabrykaRegulator::pobierzRegulator(string typ, konfiguracja config)
{
    Regulator* regulator;
    
    if (typ == "p") {
        regulator = new RegulatorP(config.k);
    } else if (typ == "pid") {
        regulator = new RegulatorPID(config.k, config.Ti, config.Td, config.N);
    } else {
        throw "Nie znaleziono regulatora o typie: " + typ;
    }
    
    return regulator;
}