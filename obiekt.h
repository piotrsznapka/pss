#ifndef __OBIEKT_H__
#define __OBIEKT_H__
#include <string>
#include <vector>
using namespace std;

// abstarkcyjna klasa Obiekt We Wy
class ObiektWeWy {
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
  
#endif
