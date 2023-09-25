#include <iostream>
#include "User.h"
using namespace std;

int main() {
    User user("myusername", "mypassword");

    string enteredUsername;
    string enteredPassword;

    cout << "Enter username: ";
    cin >> enteredUsername;

    cout << "Enter password: ";
    cin >> enteredPassword;

    try {
        if (user.authenticate(enteredUsername, enteredPassword)) {
            cout << "Authentication successful. Welcome, " << enteredUsername << "!\n";
        }
    }
    catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
