#include <iostream>
using namespace std;
int main() {
    double base, result = 1.0;
    int exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    int absExponent = (exponent < 0) ? -exponent : exponent;
    for(int i = 0; i < absExponent; i++) {
        result *= base;
    }
    if (exponent < 0) {
        result = 1.0 / result;
    }
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;
    return 0;
}

