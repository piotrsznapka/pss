#include "obiekt.h"

using namespace std;

// konstruktor obiektu ARX
 ObiektARX::ObiektARX(int k ,vector<double> WielomianA, vector<double>  WielomianB)
    { 
    dA = WielomianA.size();
    dB = WielomianB.size()-1;
    W_A = WielomianA;
    W_B = WielomianB;
    k1 = k;
    cout<<"dA = "<<dA<<endl;
    cout<<"dB = "<<dB<<endl;
    
    //warunki poczatkowe
    for(int i=0;i<dA;++i){
            ProbkiY.push_back(0);
             cout<<"warunki poczatkowe: Y["<<i<<"] = "<<ProbkiY[i]<<endl;
           }
    for(int i=0;i<(dB+k1);++i){
             ProbkiU.push_back(0);
             cout<<"warunki poczatkowe: U["<<i-k+1<<"] = "<<ProbkiU[i]<<endl;
           }
    cout<<endl;
    }
 // definicja funkcji symuluj
 double ObiektARX::symuluj(double wej) {
        
        double wyj;
        Wielomian A (W_A,k1);
        Wielomian B (W_B,k1);
        double BialySzum;
        double wynikA;
        double wynikB;
        
        //Generowanie bia�ego szumu
        Generator * wsk = Generator::egzemplarz();
        BialySzum =  wsk->losuj(0.01);
        
        //obliczanie wartoscie wielomian�w dla znanych pr�bek
        wynikA = A.oblicz_wartosc(ProbkiY);
        wynikB = B.oblicz_wartosc(ProbkiU);
        
        //pr�bka wyj�ciowa
        wyj = wynikB - wynikA;// + BialySzum;
        
        //aktualizacja pr�bek wyjsciowych
        for(int i = dA-1 ; i>0 ; i-- ){
                ProbkiY[i]=ProbkiY[i-1];
                }
        ProbkiY[0]=wyj;
        
        //aktualizacja pr�bek wejsciowcyh      
        for(int i = dB+k1-1 ; i>0 ; i--){
                ProbkiU[i]=ProbkiU[i-1];
                }
        ProbkiU[0]=wej;
        
    return wyj;
}
// konstruktor wielomianu
 Wielomian::Wielomian(vector<double>Wspolczynniki, int k){
                                                                                                  
   d = Wspolczynniki.size();
   Wsp = Wspolczynniki; 
   k=k;                                                                                                 
 }
 
 // definicja funkcji do obliczania wartosci wielomianu dla zadanej pr�bki                                                   
 double Wielomian::oblicz_wartosc(vector<double>Probki){
        
        double wynik;
        int i;
        for (i=0;i<d;i++){
            wynik += Wsp[i] * Probki[i];
            }
                      
        return wynik;
        }
        
// konstruktor Regulatora P
 RegulatorP::RegulatorP(double k)
 { 
      s_k = k;
}
 
// definicja funkcji do wyznaczania wartosci sterowania     
double RegulatorP::symuluj(double wej, double wartoscZadana)
{       
       double WartoscSterowania;
       double Uchyb;
       
       Uchyb = wartoscZadana - wej;      // wyznaczenie uchybu : gdzie wej jest sygnalem wyjsciowym z obiektu dyskretnego
       WartoscSterowania = s_k * Uchyb;  // wyznaczenie wartosci sterowania u(i) kt�ra wchodzi na wejscie obiektu dyskretnego
       return WartoscSterowania;
}