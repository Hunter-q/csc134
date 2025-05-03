#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Question 1
void averageRainfall() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    double average = (rain1 + rain2 + rain3) / 3.0;
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches.\n";
}

// Question 2
void volumeOfBlock() {
    double width, length, height;

    cout << "Enter the width of the block: ";
    cin >> width;
    cout << "Enter the length of the block: ";
    cin >> length;
    cout << "Enter the height of the block: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "Error: All dimensions must be greater than zero.\n";
        return;
    }

    double volume = width * length * height;
    cout << "The volume of the block is: " << volume << endl;
}

// Question 3
void romanNumeral() {
    int number;
    cout << "Enter a number (1 - 10): ";
    cin >> number;

    if (number < 1 || number > 10) {
        cout << "Error: Number must be between 1 and 10.\n";
        return;
    }

    cout << "The Roman numeral version of " << number << " is ";

    switch (number) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        case 10: cout << "X"; break;
    }

    cout << ".\n";
}

// Question 4
void geometryCalculator() {
    int choice;
    double radius, length, width, base, height;
    const double PI = 3.14159;

    cout << "Geometry Calculator\n"
         << "1. Calculate the Area of a Circle\n"
         << "2. Calculate the Area of a Rectangle\n"
         << "3. Calculate the Area of a Triangle\n"
         << "4. Quit\n"
         << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the circle's radius: ";
            cin >> radius;
            if (radius < 0) {
                cout << "The radius cannot be less than zero.\n";
            } else {
                cout << "The area is " << PI * radius * radius << endl;
            }
            break;
        case 2:
            cout << "Enter the rectangle's length: ";
            cin >> length;
            cout << "Enter the rectangle's width: ";
            cin >> width;
            if (length < 0 || width < 0) {
                cout << "Length and width must be positive.\n";
            } else {
                cout << "The area is " << length * width << endl;
            }
            break;
        case 3:
            cout << "Enter the triangle's base: ";
            cin >> base;
            cout << "Enter the triangle's height: ";
            cin >> height;
            if (base < 0 || height < 0) {
                cout << "Only enter positive values for base and height.\n";
            } else {
                cout << "The area is " << 0.5 * base * height << endl;
            }
            break;
        case 4:
            cout << "Returning to main menu...\n";
            break;
        default:
            cout << "The valid choices are 1 through 4. Run the program again and select one of those.\n";
    }
}

// Question 5
void distanceTraveled() {
    int speed, time;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    if (speed < 0) {
        cout << "Speed cannot be negative.\n";
        return;
    }

    cout << "How many hours has it traveled? ";
    cin >> time;
    if (time < 1) {
        cout << "Time must be at least 1 hour.\n";
        return;
    }

    cout << "Hour\tDistance Traveled\n";
    cout << "-----------------------------\n";
    for (int i = 1; i <= time; ++i) {
        cout << i << "\t" << (speed * i) << endl;
    }
}

// Question 6
int main() {
    int choice;
    do {
        cout << "\nMain Menu:\n"
             << "1. Average Rainfall\n"
             << "2. Volume of a Block\n"
             << "3. Roman Numerals\n"
             << "4. Geometry Calculator\n"
             << "5. Distance Traveled\n"
             << "6. Exit\n"
             << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1: averageRainfall(); break;
            case 2: volumeOfBlock(); break;
            case 3: romanNumeral(); break;
            case 4: geometryCalculator(); break;
            case 5: distanceTraveled(); break;
            case 6: cout << "Exiting program. Goodbye!\n"; break;
            default: cout << "Invalid choice. Please select an option from 1 to 6.\n";
        }
    } while (choice != 6);

    return 0;
}