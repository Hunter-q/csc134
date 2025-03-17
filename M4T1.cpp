// Hunter Pike
// 3-16-2025
// Csc134
// M4T1





#include <iostream>
using namespace std;

int main() {
    int count = 0;  // Initialize
    
    // While loop to print "Hello" 5 times
    while (count < 5) {
        cout << "Hello" << endl;
        count++;  // Increment the counter
    }

    // Print "That's all!" after the loop
    cout << "That's all!" << endl;


}


// 5-6

#include <iostream>
using namespace std;

int main() {
    const int start = 1;    // Start 
    const int end = 10;     // End
    int num = start;        // Initialize

    // Use a while loop 
    while (num <= end) {
        cout << "Number: " << num << ", Square: " << num * num << endl;
        num++;  // Increment num by 1
    }

    return 0;
}





