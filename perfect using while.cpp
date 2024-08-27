#include <iostream>
using namespace std;
bool isPerfectNumber(int number) {
    if (number <= 0) {
        return false; 
    }
    int sum = 0;
    int i = 1;
    while (i <= number / 2) {
        if (number % i == 0) {
            sum += i;
        }
        i++;
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

