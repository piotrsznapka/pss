#ifndef __OBIEKT_H__
#define __OBIEKT_H__
#include <string>
#include <vector>
using namespace std;

// abstarkcyjna klasa Obiekt WeWy
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
      
//abstrakcyjna klasa Regulator
class Regulator : public ObiektWeWy {
      
      public:
             virtual double symuluj (double wej)=0;
             double GenWartZad(double Amplituda);  //sygna³ sta³y
             double GenWartZad(int ChwilaSkoku);   //Skok jednostkowy
             double GenWartZad(double Amplituda,int Okres,double Wypelnienie);//Prostok¹t
             double GenWartZad(double Amplituda,int Okres);//Sinusoida
             int ProbkiSinus;
             int ProbkiSkok;
             int ProbkiProstokat;
             int l;
      private:
              vector<double> s_tab;
              unsigned int s_i;
             
};
//klasa Regulatora P
class RegulatorP : public Regulator {
      
      public:
             RegulatorP(double k);
             double symuluj(double wej);
             
      private:
              double s_k;
              
};

#endif
