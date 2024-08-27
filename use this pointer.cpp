#include <iostream>
using namespace std;
class Box {
private:
    double length;
    double width;
    double height;
public:
    Box(double l, double w, double h) {
        this->length = l; 
        this->width = w;  
        this->height = h; 
    }
    void displayDimensions() const {
        cout << "Length: " << this->length << endl; 
        cout << "Width: " << this->width << endl;   
        cout << "Height: " << this->height << endl; 
    }
    void setDimensions(double length, double width, double height) {
        this->length = length; 
        this->width = width;   
        this->height = height; 
    }
    double calculateVolume() const {
        return this->length * this->width * this->height; 
    }
};
int main() {
    double l, w, h;
    cout << "Enter the length of the box: ";
    cin >> l;
    cout << "Enter the width of the box: ";
    cin >> w;
    cout << "Enter the height of the box: ";
    cin >> h;
    Box box(l, w, h);
    box.displayDimensions();
    cout << "Volume of the box: " << box.calculateVolume() << endl;
    cout << "Enter new dimensions:" << endl;
    cout << "Length: ";
    cin >> l;
    cout << "Width: ";
    cin >> w;
    cout << "Height: ";
    cin >> h;
    box.setDimensions(l, w, h);
    box.displayDimensions();
    cout << "Updated volume of the box: " << box.calculateVolume() << endl;
    return 0;
}

