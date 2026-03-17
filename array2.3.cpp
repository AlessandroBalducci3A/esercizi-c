#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    string nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"};
    string v[12];

    for(int i = 0; i < 12; i++) {
        v[i] = nomiPossibili[rand() % 5];
    }

    int count = 0;

    for(int i = 0; i < 12; i++) {
        if(v[i] == "Sara") {
            count++;
        }
    }

    cout << "Numero di Sara: " << count << endl;

    return 0;
}