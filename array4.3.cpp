#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int v[10];
    int k = 0;
    int r;


    for(int i = 0; i < 10; i++) {
        
        v[i] = rand() % 100;
      
    }
    cout << "scegli un numero: 1 somma 2 prodotto 3 massimo: " << endl;
        cin >> r;

    switch(r){
        case 1: 
        for(int n : v) {
            k += n;}
        cout << k << endl;
        
    
        break;
        case 2: 
        for(int n : v) {
            k *= n;}
        cout << k << endl;
        break;
        case 3: 
        for(int n : v) {
            if(n>k)
                k = n;
        }

        cout << k << endl;break;
        default: cout << "errore" << endl;
    }
    

    

    return 0;
}