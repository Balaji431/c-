#include <iostream>
#include <string>
#include <algorithm>
class StringConcatenator {
public:
    std::string concatenate(const std::string& str1, const std::string& str2) {
        return str1 + str2;
    }
};
class StringReverser {
public:
    std::string reverse(const std::string& str) {
        std::string reversedStr = str;
        std::reverse(reversedStr.begin(), reversedStr.end());
        return reversedStr;
    }
};
int main() {
    StringConcatenator concatenator;
    std::string str1 = "Hello";
    std::string str2 = "World";
    std::string concatenatedResult = concatenator.concatenate(str1, str2);
    std::cout << "Concatenated Result: " << concatenatedResult << std::endl;
    StringReverser reverser;
    std::string originalStr = "OpenAI";
    std::string reversedResult = reverser.reverse(originalStr);
    std::cout << "Reversed Result: " << reversedResult << std::endl; 
    return 0;
}

