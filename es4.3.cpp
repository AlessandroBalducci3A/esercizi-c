#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main()
{
    srand(time(0));

    int n = rand() % 50 + 1;
    int numero;
    
    while(true){
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
    }
    
    return 0;
}