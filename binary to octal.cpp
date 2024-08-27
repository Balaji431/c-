#include<iostream>
#include<string>
using namespace std;

class BinaryToOctal {
    string binary;
public:
    BinaryToOctal(string bin) {
        binary = bin;
        cout << "Octal equivalent of " << binary << " is " << binaryToOctal(binary) << endl;
    }
    string binaryToOctal(string binary) {
        int decimal = 0;
        for(int i = 0; i < binary.length(); i++) {
            decimal += (binary[i] - '0') * pow(2, binary.length() - i - 1);
        }
        string octal = "";
        while(decimal != 0) {
            octal = (char)(decimal % 8 + '0') + octal;
            decimal /= 8;
        }
        return octal;
    }
};

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    BinaryToOctal bto(binary);
    return 0;
}
