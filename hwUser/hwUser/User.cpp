#include "User.h"
#include <stdexcept>

User::User(const string& username, const string& password)
    : username(username), password(password) {}

bool User::authenticate(const string& enteredUsername, const string& enteredPassword) {
    if (username == enteredUsername && password == enteredPassword) {
        return true;
    }
    else {
        throw runtime_error("Authentication failed. Invalid username or password.");
    }
}
