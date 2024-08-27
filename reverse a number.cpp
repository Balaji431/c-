#include<iostream>
using namespace std;

class Triangle {
    int n;
public:
    Triangle(int x) {
        n = x;
        printTriangle(n);
    }
    Triangle(int x, int y) {
        n = x;
        printTriangleSquare(n);
    }
    void printTriangle(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    void printTriangleSquare(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << i*i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Triangle t1(num);
    Triangle t2(num, 0);
    return 0;
}
