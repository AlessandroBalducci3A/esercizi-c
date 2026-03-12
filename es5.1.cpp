#include <iostream>
using namespace std;

int main() {
    int num;
    int somma = 0;
    int count = 0;
    int massimo, minimo;

    cout << "Inserisci un numero (0 per terminare): ";
    cin >> num;
    if (num != 0){
        massimo = num;
        minimo = num;
    }
    while (num != 0){
        somma += num;
        count++;
        if (num > massimo){
            massimo = num;
        }
        if (num < minimo){
            minimo = num;
        }

        cout << "Inserisci un numero (0 per terminare): ";
        cin >> num;
    }

        double media = (double)somma / count;

        cout << "Somma: " << somma << endl;
        cout << "Media: " << media << endl;
        cout << "Massimo: " << massimo << endl;
        cout << "Minimo: " << minimo << endl;
    

    return 0;
}



