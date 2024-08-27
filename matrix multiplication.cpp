#include <iostream>
using namespace std;
int main() {
    const int rows1 = 3, cols1 = 3;
    const int rows2 = 3, cols2 = 3; 
    int A[rows1][cols1] = { {1,2,3}, {1,2,3},{1,2,3} }; 
    int B[rows2][cols2] = { {1,1,1}, {2,1,2}, {3,2,1} }; 
    int C[rows1][cols2] = {0}; 
    for(int i = 0; i < rows1; ++i) {
        for(int j = 0; j < cols2; ++j) {
            for(int k = 0; k < cols1; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Resultant Matrix C (A x B):" << endl;
    for(int i = 0; i < rows1; ++i) {
        for(int j = 0; j < cols2; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

