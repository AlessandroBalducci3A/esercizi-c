#include <iostream>
using namespace std;

int main() {

    int array[6];

    cout << "Inserisci 6 numeri: ";
    for(int i = 0; i < 6; i++) {
        cin >> array[i];
    }

    cout << "I numeri in ordine inverso sono: ";
    for(int i = 5; i >= 0; i--) {
        cout << array[i] << " " << endl;
    }

    return 0;
}