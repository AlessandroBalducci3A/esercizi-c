#include <iostream>
using namespace std;

int main()
{
    int n = 0, somma=0;
    int conta = 0;

    
    while(true){
        
        
        cout << "inserisci un numero: " << endl;
        cin >> n;
        if(n!=-1){
        
        somma += n;
        conta++;}
        else
        break;
    }

    double media = somma/conta;
    cout << "la media è: " << media << endl;
    return 0;
}