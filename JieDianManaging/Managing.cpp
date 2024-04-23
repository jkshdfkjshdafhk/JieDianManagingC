//
// Created by maniubi on 2024/4/6.
//

#include "Managing.h"
using namespace std;

double Managing::getMoney() {
    return money;
}

void Managing::makeMoney(double made_money) {
    this->money = this->money + made_money;
}

void Managing::spendMoney(double spended_money) {
    this->money = this->money - spended_money;
}

void Managing::setMoney(double beginning_money) {
    money = beginning_money;
}


