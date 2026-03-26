#include <iostream>
using namespace std;

int main() {

    int n, i;
    cout << "inserisci n: ";
    cin >> n;
    
    int arr[n];
    cout << "inserisci gli elementi: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[0]!=arr[i]){
        cout << "non sono tutti uguali" << endl;
        break;
        }
    }

    if(i==n)
        cout << "sono tutti uguali" << endl;

    return 0;
}