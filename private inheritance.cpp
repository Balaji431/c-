#include <iostream>
using namespace std;
class Base {
public:
    void publicMethod() {
        cout << "Public method of Base class" << endl;
    }
protected:
    void protectedMethod() {
        cout << "Protected method of Base class" << endl;
    }
private:
    void privateMethod() {
        cout << "Private method of Base class" << endl;
    }
};
class Derived : private Base {
public:
    void accessMethods() {
        publicMethod();     
        protectedMethod();
    }
};
int main() {
    Derived obj;
    obj.accessMethods();
    return 0;
}

