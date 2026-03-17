#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int arr[12];
    for(int i = 0; i < 12; i++) {
        arr[i] = rand() % 100;
    }
    int x;
    cout << "inserisci un numero: " << endl;
    cin >> x;
    for(int i = 0; i < 12; i++) {
        if(arr[i] == x) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}