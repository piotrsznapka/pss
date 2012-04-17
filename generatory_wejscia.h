#ifndef GEMERATORY_WEJSCIA_H
#define	GEMERATORY_WEJSCIA_H

#include <string>
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

// obiekt/struktura uzywana do przekazywania parametrow do generatora
class ParametryGeneratora
{
public:
    double Amplituda;
    int ChwilaSkoku;
    int Okres;
    double Wypelnienie;
};

// abstrakcyjma klasa generatora wejść
class GeneratorWejscia
{
public:
    virtual double GenWartZad(ParametryGeneratora wejscie) = 0;
    int Probki;
    int l;
};

// generator sygnału stałego
class GeneratorSygnaluStalego : public GeneratorWejscia
{
public:
    double GenWartZad(ParametryGeneratora wejscie);
};

// generator skoku jednostkowego
class GeneratorSkokuJednostkowego : public GeneratorWejscia
{
public:
    double GenWartZad(ParametryGeneratora wejscie);
};

// generator prostokątny
class GeneratorProstokatny : public GeneratorWejscia
{
public:
    double GenWartZad(ParametryGeneratora wejscie);
};

// generator sinusoidalny
class GeneratorSinusoidalny : public GeneratorWejscia
{
public:
    double GenWartZad(ParametryGeneratora wejscie);
};

class FabrykaGenerator
{
public:
    GeneratorWejscia* pobierzGenerator(string typ, int probki, int l);
};

#endif