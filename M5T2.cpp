// CSC 134 
// M5T2
// Pike
// 4-6-25



#include <iostream>
using namespace std;

// Function to return the square of an integer
int square(int num) {
    return num * num;
}

// Function to print the number and its square
void printAnswer(int num) {
    cout << num << "\t" << square(num) << endl;
}

int main() {
    // Loop through numbers 1 to 10
    for (int i = 1; i <= 10; i++) {
        printAnswer(i);  // Print number and its square
    }
    
    return 0;
}
