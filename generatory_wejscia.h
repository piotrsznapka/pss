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
    double ChwilaSkoku;
    double Okres;
    double Wypelnienie;
};

// abstrakcyjma klasa generatora wejść
class GeneratorWejscia
{
public:
    virtual double GenWartZad(double wejscie) = 0;
    ParametryGeneratora parametry;
};

// generator sygnału stałego
class GeneratorSygnaluStalego : public GeneratorWejscia
{
public:
    double GenWartZad(double wejscie);
};

// generator skoku jednostkowego
class GeneratorSkokuJednostkowego : public GeneratorWejscia
{
public:
    double GenWartZad(double wejscie);
};

// generator prostokątny
class GeneratorProstokatny : public GeneratorWejscia
{
public:
    double GenWartZad(double wejscie);
};

// generator sinusoidalny
class GeneratorSinusoidalny : public GeneratorWejscia
{
public:
    double GenWartZad(double wejscie);
};
#endif