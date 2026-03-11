#include <iostream>
using namespace std;

int main()
{
    int n, conta = 0;
    while(conta<3){
        cout << "insrisci un codice: " << endl;
        cin >> n;
        switch(n){
            case 200: 
                cout << "corretto" << endl;
                break;
            case 400:
            conta++;
                cout << "Bad Request" << endl;
                break;

            case 401:
            conta++;
                cout << "allora Unauthorized" << endl;
                break;
            case 403:
            conta++;
                cout << "Forbidden" << endl;
                break;
            case 404:
            conta++;
                cout << "Not Found" << endl;
                break;
                
                default: 
                conta++;
                cout << "errore sconosciuto" << endl;
        }
        
        
    } 
    cout << "programma terminato" << endl;
    return 0;
}
