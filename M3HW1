// CSC 134
// M3HW1 All Questions
// Hunter Pike
// 3-8-25



#include <iostream>
#include <cstdlib> // For rand()
#include <ctime>   // For time()
#include <string>
using namespace std;

int main() {

    // Question 1: Simple Chatbot

    cout << "\n--- Question 1: Simple Chatbot ---\n";
    cout << "Hello, I'm a C++ program!\nDo you like me? Please type yes or no." << endl;
    string response;
    cin >> response;
    if (response == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    } else if (response == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    } else {
        cout << "If you're not sure... that's OK." << endl;
    }

    // Question 2: Receipt Calculator

    cout << "\n--- Question 2: Receipt Calculator ---\n";
    double mealPrice, taxRate = 0.07, tipRate = 0.15, tax, tip = 0, total;
    int orderType;
    cout << "Enter the price of the meal: ";
    cin >> mealPrice;
    cout << "Enter 1 for dine-in, 2 for takeaway: ";
    cin >> orderType;
    tax = mealPrice * taxRate;
    if (orderType == 1) {
        tip = mealPrice * tipRate;
    }
    total = mealPrice + tax + tip;
    cout << "Meal Price: $" << mealPrice << "\nTax: $" << tax << "\nTip: $" << tip << "\nTotal: $" << total << endl;

    // Question 3: Choose Your Own Adventure

    cout << "\n--- Question 3: Choose Your Own Adventure ---\n";
    cout << "You find yourself at a fork in the road. Do you go left or right? (left/right): ";
    string choice;
    cin >> choice;
    if (choice == "left") {
        cout << "You encounter a dragon! Do you fight or run? (fight/run): ";
        cin >> choice;
        if (choice == "fight") {
            cout << "You bravely defeat the dragon and win!" << endl;
        } else {
            cout << "You run away safely, but miss out on treasure." << endl;
        }
    } else {
        cout << "You fall into a pit. Game Over." << endl;
    }

    // Question 4: Math Practice Program

    cout << "\n--- Question 4: Math Practice Program ---\n";
    srand(time(0));
    int num1 = rand() % 10;
    int num2 = rand() % 10;
    int userAnswer;
    cout << "What is " << num1 << " plus " << num2 << "? ";
    cin >> userAnswer;
    if (userAnswer == num1 + num2) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer was " << (num1 + num2) << "." << endl;
    }

    return 0;
}
