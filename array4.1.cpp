#include <iostream>
using namespace std;

int main() {
    
    

    int n, i, tot=1;
    cout << "inserisci n: ";
    cin >> n;
    
    int arr[n];

    cout << "inserisci gli elementi: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
        if(i%2==1 && arr[i]!=0)
            tot = tot*arr[i];
    }

    
    cout << "il totale è: " << tot << endl;
    
    return 0;
}