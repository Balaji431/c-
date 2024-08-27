#include <iostream>
using namespace std;
void swapScores(int &scoreAlice, int &scoreBob) {
    int temp = scoreAlice;
    scoreAlice = scoreBob;
    scoreBob = temp;
}
int main() {
    int scoreAlice, scoreBob;
    cout << "Enter Alice's score: ";
    cin >> scoreAlice;
    cout << "Enter Bob's score: ";
    cin >> scoreBob;
    cout << "Before swapping:" << endl;
    cout << "Alice: " << scoreAlice << ", Bob: " << scoreBob << endl;
    swapScores(scoreAlice, scoreBob);
    cout << "After swapping:" << endl;
    cout << "Alice: " << scoreAlice << ", Bob: " << scoreBob << endl;
    return 0;
}

