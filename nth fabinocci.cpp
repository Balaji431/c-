#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the position (n) to find the nth Fibonacci number: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input! Please enter a positive integer." << endl;
        return 1;
    }
    int a = 0, b = 1, next;
    if (n == 1) {
        cout << "The 1st Fibonacci number is " << a << endl;
        return 0;
    }
    if (n == 2) {
        cout << "The 2nd Fibonacci number is " << b << endl;
        return 0;
    }
    for (int i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    cout << "The " << n << "th Fibonacci number is " << b << endl;
    return 0;
}

