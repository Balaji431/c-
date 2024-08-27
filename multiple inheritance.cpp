#include <iostream>
using namespace std;
class Base1 {
protected:
    int a;
public:
    void setA(int value) {
        a = value;
    }
    int getA() {
        return a;
    }
};
class Base2 {
protected:
    int b;

public:
    void setB(int value) {
        b = value;
    }
    int getB() {
        return b;
    }
};
class Base3 {
protected:
    int c;
public:
    void setC(int value) {
        c = value;
    }
    int getC() {
        return c;
    }
};
class Derived : public Base1, public Base2, public Base3 {
public:
    void show() {
        cout << "Value of a: " << getA() << endl;
        cout << "Value of b: " << getB() << endl;
        cout << "Value of c: " << getC() << endl;
        cout << "Sum of a, b, c: " << getA() + getB() + getC() << endl;
    }
};
int main() {
    Derived obj;
    obj.setA(100);  
    obj.setB(200);  
    obj.setC(300);  
    obj.show();
    return 0;
}
