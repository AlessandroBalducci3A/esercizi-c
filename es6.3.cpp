#include <iostream>
using namespace std;

int main() {
    int array1[4], array2[4], array3[4];

    cout << "Inserisci 4 numeri per il primo array: ";
    for(int i = 0; i < 4; i++) {
        cin >> array1[i];
    }

    cout << "Inserisci 4 numeri per il secondo array: ";
    for(int i = 0; i < 4; i++) {
        cin >> array2[i];
        array3[i] = array1[i] + array2[i];
    }

    cout << "La somma degli elementi dei due array è: ";
    for(int i = 0; i < 4; i++) {
        cout << array3[i] << " ";
    }
    cout << endl;

    return 0;
}