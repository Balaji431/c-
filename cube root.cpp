#include <iostream>
using namespace std;

int cbrt(int number) {
    // Handle edge cases
    if (number < 0) {
        cout << "Error: Negative numbers do not have real cube roots in the set of natural numbers." << endl;
        return -1;
    }

    if (number == 0 || number == 1) {
        return number;
    }

    // Initialize variables
    int i = 1;
    int result = 1;

    // Use a loop to find the cube root
    while (result <= number) {
        i++;
        result = i * i * i;
    }

    // Check if we found an exact cube root
    if (result == number) {
        return i;
    } else {
        return i - 1;  // Return the integer part of the cube root
    }
}

int main() {
    int number;

    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    // Find the cube root
    int cbrtResult = cbrt(number);

    // Display the result
    if (cbrtResult != -1) {
        cout << "The integer part of the cube root of " << number << " is " << cbrtResult << endl;
    }

    return 0;
}

