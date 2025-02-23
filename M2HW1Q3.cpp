//Hunter Pike
//CSC134
//2-23-25
//M2HW1Q3






#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int pizzasOrdered, slicesPerPizza, visitors;
    
    // input
    cout << "Enter the number of pizzas ordered: ";
    cin >> pizzasOrdered;
    cout << "Enter the number of slices per pizza: ";
    cin >> slicesPerPizza;
    cout << "Enter the number of visitors: ";
    cin >> visitors;

    int totalSlices = pizzasOrdered * slicesPerPizza;

    int slicesNeeded = visitors * 3;

    int leftoverSlices = totalSlices - slicesNeeded;

    // Display result
    cout << "Slices of pizza left over: " << leftoverSlices << endl;

    return 0;
}