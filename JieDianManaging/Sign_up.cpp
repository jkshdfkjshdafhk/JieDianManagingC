#include "Sign_up.h"
using namespace std;

bool Sign_up::sign_up(string username, string password) {
    try {
        this->user.insert(pair<string, string>(username, password));
    }
    catch (exception e) {
        return false;
    }
    return true;
}