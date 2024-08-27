#include <iostream>
using namespace std;
class Box {
public:
    double length;
    Box(double l, double w) : length(l) {
        setWidth(w);  
    }
    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        } else {
            cout << "Width cannot be negative." << endl;
        }
    }
    double getWidth() const {
        return width;
    }
    void print() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
private:
    double width;
};
int main() {
    Box myBox(06,6.0);
    myBox.print();
    myBox.setWidth(9.0); 
    myBox.print();
    return 0;
}

