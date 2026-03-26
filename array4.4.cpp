#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int N = 10;
    int v[N];
    srand(time(0));
    int scelta, continua = 1;

    while (continua) {
        for (int i = 0; i < N; i++) {
            v[i] = rand() % 100;
        }

        int op;
        do {
            cout << "1 Conta pari 2 Conta dispari 3 Somma pari 4 Somma dispari 5 Esci";
            cin >> op;

            int count = 0, somma = 0;

            switch (op) {
                case 1:
                    for (int i = 0; i < N; i++)
                        if (v[i] % 2 == 0) count++;
                    cout << count << endl;
                    break;
                case 2:
                    for (int i = 0; i < N; i++)
                        if (v[i] % 2 != 0) count++;
                    cout << count << endl;
                    break;
                case 3:
                    for (int i = 0; i < N; i++)
                        if (v[i] % 2 == 0) somma += v[i];
                    cout << somma << endl;
                    break;
                case 4:
                    for (int i = 0; i < N; i++)
                        if (v[i] % 2 != 0) somma += v[i];
                    cout << somma << endl;
                    break;
            }
        } while (op != 5);
    }


    return 0;
    }