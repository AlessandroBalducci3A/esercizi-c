#include <iostream>
using namespace std;

int main() {

    int p, perc;
    double tot = 0;
   

    cout << "Inserisci il prezzo originale e la percentuale di sconto: " << endl;
    cin >> p;
    cin >> perc;

    while(p!=0) {

    tot = p-p*perc/100;
    cout << tot << endl;

    cout << "Inserisci prezzo e percentuale di sconto: " << endl;
    cin >> p;
    cin >> perc;
    
    }

    

    return 0;
}