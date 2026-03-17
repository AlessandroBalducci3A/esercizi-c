#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    string nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"};
    string v[10];

    for(int i = 0; i < 10; i++) {
        v[i] = nomiPossibili[rand() % 5];
    }

    int posizione = -1;

    for(int i = 0; i < 10; i++) {
        if(v[i] == "Anna") {
            posizione = i;
            break;
        }
    }

    cout << "Posizione di Anna: " << posizione << endl;

    return 0;
}