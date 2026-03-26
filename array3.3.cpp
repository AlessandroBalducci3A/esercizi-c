#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Inserisci la dimensione del vettore: ";
    cin >> N;

    int v[N];


    cout << "Inserisci gli elementi del vettore:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int temp = v[0];
    v[0] = v[N - 1];
    v[N - 1] = temp;

    cout << "Vettore dopo lo scambio:" << endl;
    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }

    return 0;
}