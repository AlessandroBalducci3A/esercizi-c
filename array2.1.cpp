#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int v[10];
    int somma = 0;

    for(int i = 0; i < 10; i++) {
        v[i] = rand() % 100;
    }

    for(int i = 0; i < 10; i++) {
        if(i % 2 == 0) {
            somma += v[i];
        }
    }

    cout << "Somma posizioni pari: " << somma << endl;

    return 0;
}