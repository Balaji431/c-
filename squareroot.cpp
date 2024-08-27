#include <iostream>
using namespace std;
int sqrt(int number) {
    if (number < 0) {
        cout << "Error: Negative numbers do not have real square roots." << endl;
        return -1;
    }

    if (number == 0 || number == 1) {
        return number;
    }
    int i = 1;
    int result = 1;
    while (result <= number) {
        i++;
        result = i * i;
    }
    if (result == number) {
        return i;
    } else {
        return i - 1;  
    }
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int sqrtResult = sqrt(number);
    if (sqrtResult != -1) {
        cout << "The integer part of the square root of " << number << " is " << sqrtResult << endl;
    }
    return 0;
}

