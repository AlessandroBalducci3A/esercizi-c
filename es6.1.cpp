#include <iostream>
using namespace std;

int main() {
    int num, primo;
    bool x = true;

    cout << "Inserisci numeri (0 per terminare): ";
    cin >> primo; 

    if(primo != 0) {
        while(true) {
            cin >> num; 
            if(num == 0) 
                break; 
            
            if(num != primo)
                x = false; 
        }
    }

    if(x)
        cout << "Tutti i numeri inseriti sono uguali." << endl;
     else 
        cout << "I numeri inseriti sono diversi." << endl;
    
    return 0;
}