#include <iostream>
using namespace std;

int main() {
               float Cm,Ri,i,x;
               cout<<"inserisci il costo della moto"<<endl;
               cin>> Cm;
               cout<<"prima di acquistare la moto quanti risparmi hai?"<<endl;
               cin>>Ri;
               i=0;
               while (Ri<Cm)
               {
                  cout<<"inserisci i risparmi accumulati"<<endl;
                  cin>> x;
                  Ri=Ri+x;
                  cout<<"l'ammontare dei soldi accumulato è pari a " << Ri <<endl;
                  cout<<"per comprare la moto ti servono ancora" << Cm-Ri <<endl;
                  i=i+1;
                 }
            { 
                cout<<"i risparmi sono stati effettuati " << x <<endl;
                cout<<"dopo l'acquisto della moto ti rimangono" << Cm-Ri <<endl;
                }

              }