#include <iostream>
using namespace std;

int main(){
    

    int base, altezza;
    cout << "inserisci base e altezza " << endl;
    cin >> base >> altezza;
    if(altezza>0&&base>0) {
        double area = (base*altezza)/2;
        cout << "l'area è: " << area << endl;
    }
        else
        cout << "i valori non sono positivi" << endl;
    

    return 0;
}