#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "quanti numeri vuoi inserire? " << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "inserisci un numero: " << endl;
        cin >> arr[i];
    }
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
    }
    cout << min << endl;
    return 0;
}