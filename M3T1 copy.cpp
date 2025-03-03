//Hunter Pike
//CSC134
//3-2-2025
//M3T1


#include <iostream>
using namespace std;



int main() {
    // Declare variables for length and width of two rectangles
    double length1, width1, length2, width2;
    
    // Ask the user for the dimensions of the first rectangle
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;

    // Ask the user for the dimensions of the second rectangle
    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    // Calculate the areas
    double area1 = length1 * width1;
    double area2 = length2 * width2;

    // Display the areas
    cout << "The area of the first rectangle is: " << area1 << endl;
    cout << "The area of the second rectangle is: " << area2 << endl;

    return 0;
}