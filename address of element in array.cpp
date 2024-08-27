#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i << ": ";
        cout << "Value = " << arr[i] << ", ";
        cout << "Address = " << &arr[i] << endl;
    }
    return 0;
}

