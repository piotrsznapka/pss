/* 
 * File:   fabryki.h
 * Author: piotr
 *
 * Created on 24 kwiecień 2012, 23:16
 */

#ifndef FABRYKI_H
#define	FABRYKI_H

#include "generatory_wejscia.h"
#include "konfiguracja.h"
#include "obiekt.h"

class FabrykaGenerator
{
public:
    GeneratorWejscia* pobierzGenerator(string typ, ParametryGeneratora parametry);
};

class FabrykaRegulator
{
public:
    Regulator* pobierzRegulator(string typ, konfiguracja config);
};

#endif	/* FABRYKI_H */

