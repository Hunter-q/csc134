// CSC 134 
// M2T2
// Pike
// 2/9/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int numApples;
    double pricePerApple; 
     

    cout << "What is your name? " << endl;
    cin >> name;
    cout << "How many apples are for sale?" << endl;
    cin >> numApples;
    cout << "How much per apple?" << endl;
    cin >> pricePerApple;
   
    cout << "Welcome to " << name << "'s apple store " << endl;
    cout << "We have " << numApples << " apples in stock." << endl;
    cout << "Price per apple is $" << pricePerApple << endl;


    return 0;
}