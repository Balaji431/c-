#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
    double calculateArea() const {
        return length * width;
    }
    void display() const {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};
int main() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    Rectangle rect(length, width);
    rect.display();
    cout << "Enter new dimensions:" << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    rect.setDimensions(length, width);
    rect.display();
    return 0;
}

