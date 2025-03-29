// CSC 134
// M4LAB1
// Hunter Pike
// 3-29-25







#include <iostream>
using namespace std;

int main() {
    int width, height;

    // Ask user for height and width of the block
    cout << "Enter the width of the block: ";
    cin >> width;
    cout << "Enter the height of the block: ";
    cin >> height;

    // Nested loops to print the block of asterisks
    for (int i = 0; i < height; i++) {      // Outer loop for height (rows)
        for (int j = 0; j < width; j++) {   // Inner loop for width (columns)
            cout << "* ";                   // Print an asterisk followed by a space
        }
        cout << endl;                       
    }

    return 0;
}