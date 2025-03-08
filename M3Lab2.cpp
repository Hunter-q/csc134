// Hunter Pike
// CSC134
// M3Lab2
// 3-8-25







#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int grade;
    
    // Get user input
    cout << "Enter the numerical grade: ";
    cin >> grade;

    // Determine letter grade
    char letterGrade;
    
    if (grade >= 90 && grade <= 100) {
        letterGrade = 'A';
    } else if (grade >= 80 && grade < 90) {
        letterGrade = 'B';
    } else if (grade >= 70 && grade < 80) {
        letterGrade = 'C';
    } else if (grade >= 60 && grade < 70) {
        letterGrade = 'D';
    } else if (grade >= 0 && grade < 60) {
        letterGrade = 'F';
    } else {
        cout << "Invalid grade entered. Please enter a value between 0 and 100." << endl;
        return 1; // Exit with an error
    }

    // Display letter grade
    cout << "The letter grade is: " << letterGrade << endl;

    return 0;
}