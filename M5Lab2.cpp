
// Hunter Pike
// 4-13-2025
// Csc134
// M5Lab2




#include <iostream>
#include <iomanip>  // for setprecision and fixed
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);

    displayData(length, width, area);

    return 0;
}

// Gets length from user
double getLength() {
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    while (length <= 0) {
        cout << "Length must be positive. Try again: ";
        cin >> length;
    }
    return length;
}

// Gets width from user
double getWidth() {
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    while (width <= 0) {
        cout << "Width must be positive. Try again: ";
        cin >> width;
    }
    return width;
}

// Calculates the area of the rectangle
double getArea(double length, double width) {
    return length * width;
}

// Displays the data
void displayData(double length, double width, double area) {
    cout << fixed << setprecision(2); // format to 2 decimal places
    cout << "\n==== Rectangle Information ====\n";
    cout << "Length: " << length << " units\n";
    cout << "Width : " << width << " units\n";
    cout << "Area  : " << area << " square units\n";
    cout << "================================\n";
}