#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int totale = 1;
    while(n>1){
        totale *= n;
        n--;
    }
    cout << totale;
    return 0;
}
