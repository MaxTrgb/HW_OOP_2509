#pragma once
#include <string>
using namespace std;

class User {
private:
    string username;
    string password;

public:
    User(const string& username, const string& password);
    bool authenticate(const string& enteredUsername, const string& enteredPassword);
};
