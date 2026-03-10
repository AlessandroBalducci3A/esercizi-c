#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "inserisci un numero" << endl;
    cin >> n;
    
    int totale = 1;
    while(n>1){
        totale = totale * n;
        n--;
    }
    cout << totale << endl;;
    return 0;
}