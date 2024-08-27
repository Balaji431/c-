#include <iostream>
using namespace std;
bool isPerfectNumber(int number) {
    int sum = 0;
    if (number <= 0) {
        return false;
    }
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    } 
    return sum == number;
}

int main() {
    int number; 
    cout << "Enter a positive integer: ";
    cin >> number;
    if (isPerfectNumber(number)) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }
    return 0;
}

