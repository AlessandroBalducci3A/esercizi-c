#include <iostream>
using namespace std;

int main()
{
    int n = 0, somma=0;
    int conta = 0;

    
    while(true){
        
        
        cout << "inserisci un numero: " << endl;
        cin >> n;
        if(n==0)
        break;
        if(n%2==1)
        somma +=n;
    }

    
    cout << "la somma è: " << somma << endl;
    return 0;
}
