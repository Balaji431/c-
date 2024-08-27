#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_map<int, int> freqMap;
    for(int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }
    int maxCount = 0;
    int mostFrequent;
    for(auto& elem : freqMap) {
        if(elem.second > maxCount) {
            maxCount = elem.second;
            mostFrequent = elem.first;
        }
    }
    cout << "The most frequent element is: " << mostFrequent << " with a frequency of " << maxCount << endl;
    return 0;
}

