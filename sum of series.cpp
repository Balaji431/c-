#include<iostream>
using namespace std;

class Series {
    int n;
public:
    Series(int x) {
        n = x;
        cout << "Sum of series 1 + 2 + 3 + ... + " << n << " is " << sumSeries(n) << endl;
    }
    Series(int x, int y) {
        n = x;
        cout << "Sum of series 1^2 + 2^2 + 3^2 + ... + " << n << "^2 is " << sumSeriesSquare(n) << endl;
    }
    int sumSeries(int n) {
        return n*(n+1)/2;
    }
    int sumSeriesSquare(int n) {
        return n*(n+1)*(2*n+1)/6;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Series s1(num);
    Series s2(num, 0);
    return 0;
}
