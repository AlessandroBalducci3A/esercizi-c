#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main()
{
    srand(time(0));

    int n = rand() % 100 + 1;
    int conta = 0;
    int numero;
    
    while(conta<5){
        cout << "inserisci un numero" << endl;
        cin >> numero;
        if(numero<n)
        cout << "troppo basso" << endl;
        else if(numero>n)
        cout << "troppo alto" << endl;
        else{
            cout << "hai indovinato" << endl;
            break;
        }
        conta++;
    }
    cout << "il numero era: " << n << endl;
    
    return 0;
}