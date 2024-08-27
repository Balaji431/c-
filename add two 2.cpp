#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
int main() {
    int num1 = 10, num2 = 20, num3 = 30;
    int sum2 = add(num1, num2);
    cout << "Sum of two numbers (" << num1 << ", " << num2 << ") = " << sum2 << endl;
    int sum3 = add(num1, num2, num3);
    cout << "Sum of three numbers (" << num1 << ", " << num2 << ", " << num3 << ") = " << sum3 << endl;
    return 0;
}

