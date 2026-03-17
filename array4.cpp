#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int arr[10];
    for(int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    for(int i = 9; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}