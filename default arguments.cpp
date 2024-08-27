#include <iostream>
using namespace std;
int sum(int a, int b, int c = 25, int d = 30) {
    return a + b + c + d;
}
int main() {
    int result;
    result = sum(10, 15);
    cout << "The sum is: " << result << endl;
    return 0;
}

