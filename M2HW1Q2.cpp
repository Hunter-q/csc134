//CSC134
//Hunter Pike
//2-15-2025
//M2LAB




#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Constants for costs
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables for user input
    double length, width, height;

    // Prompt user for crate dimensions
    cout << "Enter the length of the crate (in feet): ";
    cin >> length;
    cout << "Enter the width of the crate (in feet): ";
    cin >> width;
    cout << "Enter the height of the crate (in feet): ";
    cin >> height;

    // Calculate volume
    double volume = length * width * height;

    // Calculate costs
    double crateCost = volume * COST_PER_CUBIC_FOOT;
    double customerCost = volume * CHARGE_PER_CUBIC_FOOT;
    double profit = customerCost - crateCost;

    // Display results
    cout << fixed << setprecision(2); // Format output to two decimal places
    cout << "Volume of the crate: " << volume << " cubic feet" << endl;
    cout << "Cost to produce the crate: $" << crateCost << endl;
    cout << "Customer charge for the crate: $" << customerCost << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}