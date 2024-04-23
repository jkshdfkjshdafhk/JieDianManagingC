#pragma once
#include "User_operation.h"
using namespace std;

class Sign_up :
    public User_operation
{
public:
    bool sign_up(string username, string password);
};

