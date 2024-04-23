#include "Login.h"
#include "User_operation.h"
using namespace std;

bool Login::logIn(string username, string user_password) {
    map<string, string>::iterator it = User_operation::user.find(username);
    if (it != User_operation::user.end()) {
        string pass = it->second;
        if (pass == user_password) {
            return true;
        }
    }
    else {
        return false;
    }
    return false;
}