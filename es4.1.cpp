#include <iostream>
using namespace std;

int main()
{
    int n, pbase;
    string tipo;
    double totale;
    cout << "inserisci il numero di biglieti" << endl;
    cin >> n;
    
    cout << "inserisci il prezzo base" << endl;
    cin >> pbase;

    int i = 0;
   
    while(i<n){
        cout << "inserisci che tipo di cliente sei: " << endl;
        cin >> tipo;
        if(tipo == "studente")
            totale = totale + pbase*0.7;
        else if (tipo == "adulto")

        totale = totale + pbase*0.95;
        else if(tipo == "over 65")
        totale = totale + pbase * 0.6;

        i++;
    }
    cout << "il totale è: " << totale << endl;;
    return 0;
}