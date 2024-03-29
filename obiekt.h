#ifndef __OBIEKT_H__
#define __OBIEKT_H__
#include <string>
#include <vector>
#include <math.h>
#include <iostream>
#include "generator.h"
#include "generatory_wejscia.h"
using namespace std;

// abstarkcyjna klasa Obiekt WeWy
class ObiektWeWy
{
public:
    virtual double symuluj (double wej) = 0;
};

// klasa Obiekt dyskretny ARX
class ObiektARX : public ObiektWeWy {
      
      public:
              ObiektARX(int k ,vector <double>  WielomianA, vector <double>  WielomianB );
              double symuluj (double wej);

              
      private:
              int k1,dA,dB;
              vector <double> W_A;
              vector <double> W_B;
              vector <double> ProbkiY;
              vector <double> ProbkiU;
            
      };
      
// klasa Wielomian do obliczania wartosci wielomianu 
class Wielomian {
      
      public:
             Wielomian(vector<double>Wspolczynniki,int k);
             double oblicz_wartosc(vector<double>Probki);
      private:
              int d;
              vector<double>Wsp;
                   
      };
      
//abstrakcyjna klasa Regulator
class Regulator {
      
      public:
             virtual double symuluj (double wej, double wartoscZadana)=0;
      private:
              vector<double> s_tab;
              unsigned int s_i;
             
};



//klasa Regulatora P
class RegulatorP : public Regulator{
      
      public:
             RegulatorP(double k);
             double symuluj(double wej, double wartoscZadana);
             
      private:
              double s_k;
              
};

//klasa Regulatora PID
class RegulatorPID : public Regulator {
      
      public:
             RegulatorPID(double k, double Ti, double Td, int N);
             double symuluj(double wej, double wartoscZadana);
             
      private:
              double s_k;
              double s_Ti;
              double s_Td;
              double I_probka;
              double D_probka;
              double wej_probka;
              double s_N;
              
};
#endif
