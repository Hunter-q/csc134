





#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
void main_menu();
void choice_back_door();
void choice_go_home();
void choice_explore_forest();
void choice_enter_cave();

int main() {
    main_menu();
    return 0;
}

// -------------------- MAIN MENU --------------------
void main_menu() {
    int choice;

    while (true) {
        cout << "========================\n";
        cout << " Welcome to the Adventure!\n";
        cout << "========================\n";
        cout << "1. Go out the back door\n";
        cout << "2. Go home\n";
        cout << "3. Explore the forest\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            choice_back_door();
        } else if (choice == 2) {
            choice_go_home();
        } else if (choice == 3) {
            choice_explore_forest();
        } else if (choice == 4) {
            cout << "Thanks for playing! Goodbye.\n";
            break;
        } else {
            cout << "Invalid input! Please choose 1, 2, 3, or 4.\n\n";
            cin.clear(); // clear input buffer
            cin.ignore(1000, '\n');
        }
    }
}

// -------------------- CHOICE FUNCTIONS --------------------
void choice_back_door() {
    cout << "\nYou sneak out the back door and find a hidden trail.\n";
    cout << "It leads to a dark cave. Do you want to enter?\n";
    cout << "1. Yes\n";
    cout << "2. No, go back\n";
    int input;
    cin >> input;
    if (input == 1) {
        choice_enter_cave();
    } else {
        cout << "You return to the house safely.\n\n";
    }
}

void choice_go_home() {
    cout << "\nYou decide to go home.\n";
    cout << "There's a strange letter waiting at your door...\n";
    cout << "To be continued...\n\n";
}

void choice_explore_forest() {
    cout << "\nYou walk into the forest and hear strange noises...\n";
    cout << "Suddenly, a wild creature appears!\n";
    cout << "1. Fight it\n";
    cout << "2. Run away\n";
    int input;
    cin >> input;
    if (input == 1) {
        cout << "You bravely fight the creature and win!\n\n";
    } else {
        cout << "You run back to the house in a panic.\n\n";
    }
}

void choice_enter_cave() {
    cout << "\nYou step into the cave. It's cold and damp.\n";
    cout << "Inside, you find a treasure chest!\n";
    cout << "Congratulations, adventurer!\n\n";
}