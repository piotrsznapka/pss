#include "obiekt.h"
#include <iostream>
#include "generator.h"


using namespace std;

// konstruktor obiektu ARX
 ObiektARX::ObiektARX(int k ,vector<double> WielomianA, vector<double>  WielomianB)
    { 
    dA = WielomianA.size();
    dB = WielomianB.size();
    W_A = WielomianA;
    W_B = WielomianB;
    
    for(int i=0;i<dA;i++){
            ProbkiY.push_back(0);
           }
    for(int i=0;i<dB;i++){
             ProbkiU.push_back(0);
           }
    }
 // definicja funkcji symuluj
 double ObiektARX::symuluj(double wej) {
        
        double wyj;
        Wielomian A (W_A);
        Wielomian B (W_B);
        double BialySzum;
        double wynikA;
        double wynikB;
        
        //Generowanie bia³ego szumu
        Generator * wsk = Generator::egzemplarz();
        BialySzum =  wsk->losuj(1);
        
        //obliczanie wartoscie wielomianów dla znanych próbek
        wynikA = A.oblicz_wartosc(ProbkiY);
        wynikB = B.oblicz_wartosc(ProbkiU);
        
        //próbka wyjciowa
        wyj = wynikB - wynikA;
        
        //aktualizacja próbek
        for(int i = dA-1 ; i>0 ; i-- ){
                ProbkiY[i]=ProbkiY[i-1];
                }
        ProbkiY[0]=wyj;
               
        for(int i = dB-1 ; i>0 ; i--){
                ProbkiU[i]=ProbkiU[i-1];
                }
        ProbkiU[0]=wej;
        
    return wyj;
}
// konstruktor wielomianu
 Wielomian::Wielomian(vector<double>Wspolczynniki){
                                                   
   d = Wspolczynniki.size();
   Wsp = Wspolczynniki;                                                                                                  
 }
 
 // definicja funkcji do obliczania wartosci wielomianu dla zadanej próbki                                                   
 double Wielomian::oblicz_wartosc(vector<double>Probki){
        
        double wynik;
        int i;
        //cout << "d = " << d << endl;
        for (i=0;i<d;i++){
            //cout << "Wspolczynnik  = " << Wsp[i] << endl;
            cout << "Probka = " << Probki[i] << endl;
            wynik += Wsp[i] * Probki[i];
        }
        
        return wynik;
        }
