#include <iostream>
using namespace std;
int findMissingElement(int arr[], int size) {
    int low = 0;
    int high = size - 1;
    int mid;
    int diff = arr[0] - 0;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] - mid != diff) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low + diff;
}
int main() {
    int arr[] = {1, 2, 3, 5, 6, 7, 8, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int missingElement = findMissingElement(arr, size);
    cout << "The missing element is: " << missingElement << endl;
    return 0;
}

