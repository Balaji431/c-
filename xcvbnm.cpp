#include <iostream>
using namespace std;
class NumberStorage {
protected:
    int x;
    int y;
public:
    void setNumbers(int num1, int num2) {
        x = num1;
        y = num2;
    }
};
class Adder {
public:
    int add(int a, int b) {
        return a + b;
    }
};
class Calculator : public NumberStorage, public Adder {
public:
    void performAddition() {
        int sum = add(x, y);
        cout << "Sum of " << x << " and " << y << " is: " << sum << endl;
    }
};
int main() {
    Calculator calc;
    calc.setNumbers(4, 5);
    calc.performAddition();
    return 0;
}

