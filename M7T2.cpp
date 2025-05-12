// CSC 134 
// M7T2
// Pike
// 5-11-25





#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

// Setters
void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double l) {
    length = l;
}

// Getters
double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea() const {
    return width * length;
}

int main() {
    Rectangle box;
    double rectWidth;
    double rectLength;

    // Input validation for width
    do {
        cout << "Enter the rectangle's width (must be positive): ";
        cin >> rectWidth;
        if (rectWidth <= 0)
            cout << "Error: Width must be greater than zero.\n";
    } while (rectWidth <= 0);

    // Input validation for length
    do {
        cout << "Enter the rectangle's length (must be positive): ";
        cin >> rectLength;
        if (rectLength <= 0)
            cout << "Error: Length must be greater than zero.\n";
    } while (rectLength <= 0);

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    cout << "Rectangle width: " << box.getWidth() << endl;
    cout << "Rectangle length: " << box.getLength() << endl;
    cout << "Rectangle area: " << box.getArea() << endl;

    return 0;
}