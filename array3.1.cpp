#include <iostream>
using namespace std;

int main() {
    
    bool max = true;

    int n, i;
    cout << "inserisci n: ";
    cin >> n;
    
    int arr[n];

    cout << "inserisci gli elementi: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[n-1])
            max = false;
    }

    if(max)
    cout << "il massimo è nell'ultima posizione" << endl;
    else
    cout << "il massimo non è nell'ultima posizione" << endl;

    return 0;
}