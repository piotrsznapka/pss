#include "generatory_wejscia.h"

//sygna� sta�y     
double GeneratorSygnaluStalego::GenWartZad(ParametryGeneratora wejscie)
{         
    return wejscie.Amplituda;
}
           
//Skok jednostkowy
double GeneratorSkokuJednostkowego::GenWartZad(ParametryGeneratora wejscie)
{          
    if(wejscie.ChwilaSkoku == Probki) {
        return 1;
    } else {
        Probki++;
        return 0;
    }
}

//Prostok�t       
double GeneratorProstokatny::GenWartZad(ParametryGeneratora wejscie)
{    
    double Wartosc;
    if(Probki <= ((wejscie.Okres/2)+ (l*wejscie.Okres)) && Probki > (0+l*wejscie.Okres) )  {        
         Wartosc = wejscie.Amplituda;             
    } else{ 
        Wartosc = (0 - wejscie.Amplituda);
    }

    Probki++;
    if( Probki == ((l+1)*wejscie.Okres) ){
        l++;
    }
    return Wartosc;
}      
        
//Sinusoida       
double GeneratorSinusoidalny::GenWartZad(ParametryGeneratora wejscie)
{     
       double Wartosc;
       Wartosc = wejscie.Amplituda * sin( ((2*M_PI) / wejscie.Okres)*Probki);
       Probki++;
       return Wartosc;
}

GeneratorWejscia* FabrykaGenerator::pobierzGenerator(string typ, int probki, int l)
{
    GeneratorWejscia * generator;
    
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
    generator->Probki = probki;
    generator->l = l;
    return generator;
}
