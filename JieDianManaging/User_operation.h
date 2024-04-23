#pragma once
#include <map>
#include <iostream>
#include <string>
using namespace std;

class User_operation
{
public:
    static map<string, string> user;
    static map<string, string> init();
    bool ifEmpty();
};

