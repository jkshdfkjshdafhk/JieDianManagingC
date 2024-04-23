#include "User_operation.h"
using namespace std;


map<string, string> User_operation::init()
{
    map<string, string> nm;
    nm.insert(pair<string, string>("admin", "admin"));
    return nm;
}

bool User_operation::ifEmpty() {
    if (this->user.empty()) {
        return true;
    }
    return false;
}