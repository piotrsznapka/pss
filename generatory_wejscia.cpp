#include "generatory_wejscia.h"
#include "generator.h"

//Sygnal staly     
double GeneratorSygnaluStalego::GenWartZad(double wejscie)
{
    return parametry.Amplituda;
}
           
//Skok jednostkowy
double GeneratorSkokuJednostkowego::GenWartZad(double wejscie)
{          
    return (parametry.ChwilaSkoku == wejscie) ? 0 : 1;
}

//Prostokat       
double GeneratorProstokatny::GenWartZad(double wejscie)
{    
    double Wartosc;
    if (wejscie <= ((parametry.Okres/2)+ (parametry.Wypelnienie*parametry.Okres)) 
     && wejscie > (parametry.Wypelnienie*parametry.Okres)
    ) {        
        Wartosc = parametry.Amplituda;             
    } else{ 
        Wartosc = -1 * parametry.Amplituda;
    }

    if (wejscie == ((parametry.Wypelnienie+1)*parametry.Okres)) {
        parametry.Wypelnienie++;
    }
    return Wartosc;
}      
        
//Sinusoida       
double GeneratorSinusoidalny::GenWartZad(double wejscie)
{     
       return parametry.Amplituda * sin(((2*M_PI) / parametry.Okres)*wejscie);
}

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
