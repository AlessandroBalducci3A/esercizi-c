#include <iostream>
using namespace std;

int main() {
    int num, primo=1;
    bool x = true;
    int salva;

    cout << "Inserisci numeri (0 per terminare): ";

    if(primo != 0) {
        while(true) {
            cin >> num; 
            if(num==0)
                break;
            if(num%2==0)
            salva = num;
            
        }
    }
        cout << salva << endl;    
}