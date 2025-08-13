#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 11, 111, 1111, 11111};
    int n = sizeof(arr) / sizeof(arr[0]);

    int* ptr = &arr[n - 1];

    for (int i = n - 1; i >= 0; i--) {
        cout << *ptr << " ";
        ptr--; 
    }

    return 0;
}
