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
        if(v[i]%2==0)
        v[i] = 0;
      
    }

    for(int n : v) {
        cout << n << endl;
        
    }

    

    return 0;
}