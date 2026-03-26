#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;

    do {
        cout << "Inserisci la dimensione del vettore: ";
        cin >> N;
    }while(N % 2 == 0);

    vector<int> v(N);

    cout << "Inserisci gli elementi del vettore:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int centro = N / 2;
    bool massimo = true;
   
    for (int i = 0; i < N; i++) {
        if (i != centro && v[i] > v[centro]) {
            massimo = false;
            break;
        }
    }

    if (massimo) {
        cout << "L'elemento centrale (" << v[centro] << ") è il più grande." << endl;
    } else {
        cout << "L'elemento centrale (" << v[centro] << ") NON è il più grande." << endl;
    }

    return 0;
}