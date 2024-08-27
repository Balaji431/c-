#include <iostream>
using namespace std;
class Shape {
protected:
    string shapeName;
public:
    void setShapeName(string name) {
        shapeName = name;
    }

    void displayShapeName() const {
        cout << "Shape: " << shapeName << endl;
    }
};
class Rectangle : public Shape {
protected:
    double length, width;
public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
    double calculateArea() const {
        return length * width;
    }
    void displayArea() const {
        cout << "Area: " << calculateArea() << " square units" << endl;
    }
};
class Cuboid : public Rectangle {
private:
    double height;
public:
    void setHeight(double h) {
        height = h;
    }
    double calculateVolume() const {
        return calculateArea() * height;
    }
    void displayVolume() const {
        cout << "Volume: " << calculateVolume() << " cubic units" << endl;
    }
};
int main() {
    Cuboid cuboid;
    cuboid.setShapeName("Cuboid");
    cuboid.setDimensions(10.0, 5.0);
    cuboid.setHeight(7.0);
    cuboid.displayShapeName();
    cuboid.displayArea();
    cuboid.displayVolume();
    return 0;
}

