#include <iostream>
using namespace std;

int main()
{
    int n, pbase;
    string tipo;
    double totale;
    cout << "inserisci il numero di dipendenti" << endl;
    cin >> n;
    
    

    int i = 0;
   
    while(i<n){
        cout << "inserisci lo stipendio base: " << endl;
        cin >> pbase;
        cout << "inserisci il tipo: " << endl;
        cin >> tipo;
        if(tipo == "tempopieno")
            totale = totale + pbase*1.15;
        else if (tipo == "parttime")

        totale = totale + pbase*1.10;
        else if(tipo == "stage")
        totale = totale + pbase * 1.05;

        i++;
    }
    cout << "il totale è: " << totale << endl;;
    return 0;
}