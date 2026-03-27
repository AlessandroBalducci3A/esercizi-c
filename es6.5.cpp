#include <iostream>
using namespace std;

int main() {
    int array1[4], array2[4], array3[8];

    cout << "Inserisci 4 numeri per il primo array: ";
    for(int i = 0; i < 4; i++) {
        cin >> array1[i];
    }

    cout << "Inserisci 4 numeri per il secondo array: ";
    for(int i = 0; i < 4; i++) {
        cin >> array2[i];
    }

    array3 = array1.join(array2);

    

    return 0;
}