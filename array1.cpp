#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "inserisci quanti numeri vuoi inserire? " << endl;
    cin >> n;
    double arr[n], somma = 0;
    for(int i = 0; i < n; i++) {
        cout << "inserisci un numero: " << endl;
        cin >> arr[i];
        somma += arr[i];
    }
    cout << somma / n << endl;
    return 0;
}