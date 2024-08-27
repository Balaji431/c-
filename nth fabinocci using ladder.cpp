#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the position (n) to find the nth Fibonacci number: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input! Please enter a positive integer." << endl;
    } 
    else if (n == 1) {
        cout << "The 1st Fibonacci number is 0" << endl;
    } 
    else if (n == 2) {
        cout << "The 2nd Fibonacci number is 1" << endl;
    } 
    else {
        int a = 0, b = 1, fib = 0;
        int i = 3;
        while (i <= n) {
            fib = a + b;
            a = b;
            b = fib;
            i++;
        }
        cout << "The " << n << "th Fibonacci number is " << fib << endl;
    }
    return 0;
}

