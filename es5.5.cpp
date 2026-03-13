#include <iostream>
#include <cmath>

using namespace std;

int main() {

 int numero;
 double finale;

 cout << "Inserisci un numero: ";
 cin >> numero;

  if(numero>0){
  finale = sqrt(numero);
  cout << "radice quadrata = " << finale << endl;
}
  else
  cout << "numero non valido" << endl;


    return 0;

 }



