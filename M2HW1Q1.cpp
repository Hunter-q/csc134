// Hunter Pike
//CSC134
//M2HW1Q2
//2-23-25




#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    // Initialize variables
    string name;
    double startingBalance, depositAmount, withdrawalAmount, finalBalance;
    int accountNumber;

    // Seed the random number generator for generating account numbers
    srand(time(0));
    accountNumber = rand() % 900000 + 100000; // Generate a random 6-digit account number

    // Get user input
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your starting account balance: $";
    cin >> startingBalance;
    cout << "Enter the amount to deposit: $";
    cin >> depositAmount;
    cout << "Enter the amount to withdraw: $";
    cin >> withdrawalAmount;

    // Calculate final balance
    finalBalance = startingBalance + depositAmount - withdrawalAmount;

    // Display account details
    cout << "\n--- Account Summary ---" << endl;
    cout << "Name on the account: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final account balance: $" << finalBalance << endl;

    return 0;
}
