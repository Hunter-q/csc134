// CSC 134 
// M7T1
// Pike
// 5-11-25



#include <iostream>
#include <string>
using namespace std;

// Restaurant class definition
class Restaurant {
private:
    string name;
    int rating;

public:
    // Setter for name
    void SetName(string restaurantName) {
        name = restaurantName;
    }

    // Setter for rating
    void SetRating(int restaurantRating) {
        if (restaurantRating >= 1 && restaurantRating <= 5) {
            rating = restaurantRating;
        } else {
            rating = 0; // Default or invalid
        }
    }

    // Getter for name
    string GetName() {
        return name;
    }

    // Getter for rating
    int GetRating() {
        return rating;
    }

    // Print method
    void Print() {
        cout << name << " is rated at " << rating << " stars." << endl;
    }
};

int main() {
    // Create 3 Restaurant objects
    Restaurant rest1, rest2, rest3;

    // Set names and ratings
    rest1.SetName("Pasta Palace");
    rest1.SetRating(4);

    rest2.SetName("Burger Barn");
    rest2.SetRating(5);

    rest3.SetName("Sushi Central");
    rest3.SetRating(3);

    // Print their info
    rest1.Print();
    rest2.Print();
    rest3.Print();

    return 0;
}