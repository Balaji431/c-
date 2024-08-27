#include <iostream>
using namespace std;
class Number {
private:
    int m, n, k;
public:
    Number(int start, int end, int skip) {
        m = start;
        n = end;
        k = skip;
    }
    void printSkippedNumbers() {
        int count = 0;
        for (int i = m; i <= n; i++) {
            count++;
            if (count == k) {
                count = 0; 
                continue; 
            }
            cout << i << " ";
        }
        cout << endl;
    }
};
int main() {
    Number num(50, 100, 7);
    num.printSkippedNumbers();
    return 0;
}

