#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int numero;
    for(int i = 0; i<10; i++){

        int n = rand() % 100 + 1;
        if(n%2==0)

        cout << n << endl;  
    }
    return 0;
}