#pragma once
#include "User_operation.h"
using namespace std;
class Login :
    public User_operation
{
public:
    bool logIn(string username, string user_password);
};

