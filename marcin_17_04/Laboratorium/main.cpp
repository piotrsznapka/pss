#include "obiekt.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (void) {
     
       double wejscie;
       double wyjscie;
       int k;
       vector <double> WielomianA;
       vector <double> WielomianB;
      
       // parametry obiektu:
       // wspó³czynniki wielomianu A s¹ podawane od a1 bo a0 zawsze = 1
       // wspó³czynniki wielomianu B sa natomiast ju¿ od b0
       WielomianA.push_back(-0.6);
      
       WielomianB.push_back(0.4);
       
       k = 2;
         
       // obiekt klasy ARX
       ObiektARX MojObiekt(k , WielomianA , WielomianB );
       //obiekt klasy regulator  typu P
       RegulatorP MojRegulator(k);
      
       //symulacja
       wejscie = 5;
       for(int i = 0;i<10;i++){
               wyjscie = MojObiekt.symuluj(wejscie);
               cout << "Wyjscie = " << wyjscie << endl;
               cout<<endl;
               }
                      
    system ("PAUSE");
    return 0;
}
