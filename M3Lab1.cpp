// CSC 134 
// M3LAB1
// Hunter Pike
// 3-2-25




#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user for an integer input
    cout << "Enter an integer: ";
    cin >> number;

    // Simple if statement to check if the number is positive
    if (number > 0) {
        cout << "The number is positive." << endl;
    }

    // If statement with else to check if the number is negative or zero
    else if (number < 0) {
        cout << "The number is negative." << endl;
    }

    // Else statement when the number is neither positive nor negative (i.e., zero)
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}