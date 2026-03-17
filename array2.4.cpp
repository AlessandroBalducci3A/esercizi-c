#include <iostream>
using namespace std;

int main() {
    string v[10];

    for(int i = 0; i < 10; i++) {
        cout << "inserisci una stringa" << endl;
        getline(cin, v[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(v[i].length() > 4) {
            cout << v[i] << endl;
        }
    }

    return 0;
}