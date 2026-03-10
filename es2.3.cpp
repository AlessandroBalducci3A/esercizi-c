#include <iostream>
using namespace std;

int main()
{
    int conta = 0;
    
    
    while(true){
        
        int n;
        cout << "inserisci un numero: " << endl;
        
        cin >> n;
        
        conta++;
        cout << "vuoi continuare? " << endl;
        string x;
        cin >> x;
        if(x=="no")
        break;
    }

    cout << "i numeri inseriti sono: " << conta << endl;
    return 0;
}