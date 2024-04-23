#include <iostream>
#include <string>
#include "Managing.h"
#include "Sign_up.h"
#include "Login.h"
#include "User_operation.h"

using namespace std;

map<string,string> User_operation::user = User_operation::init();

void uso() {
    Sign_up user;
    
    if (user.ifEmpty()) {
        cout << "               请先注册" << endl;
        cout << "请输入您的用户名，以便注册>>";
        string usernamesi;
        cin >> usernamesi;
        cout << "请输入您的密码，以便注册>>";
        string passwordsi;
        cin >> passwordsi;
        cout << "请确认您的密码，以便注册>>";
        string passwordsi2;
        while (passwordsi != passwordsi2) {
            cout << "请输入您的密码，以便注册>>";
            cin >> passwordsi;
            cout << "请确认您的密码，以便注册>>";
            cin >> passwordsi2;
        }

        user.sign_up(usernamesi, passwordsi);

    }
    else {
        cout << "                       请先登录" << endl;



        cout << "请输入您的用户名，注册请输入0>>";
        string username;
        cin >> username;
        if (username == "0") {
            cout << "请输入您的用户名，以便注册>>";
            string usernamesi;
            cin >> usernamesi;
            cout << "请输入您的密码，以便注册>>";
            string passwordsi;
            cin >> passwordsi;
            cout << "请确认您的密码，以便注册>>";
            string passwordsi2;
            cin >> passwordsi2;
            while (passwordsi != passwordsi2) {

                cout << "请输入您的密码，以便注册>>";
                cin >> passwordsi;
                cout << "请确认您的密码，以便注册>>";
                cin >> passwordsi2;
            }

            user.sign_up(usernamesi, passwordsi);

        }
        else {
            Login login;
            cout << "请输入您的密码，以便登录>>";
            string password;
            cin >> password;
            while (!login.logIn(username, password)) {
                cout << "用户名或密码错误，请重输" << endl;
                cout << "请输入您的用户名，以便登录>>" << endl;
                cin >> username;
                cout << "请输入您的密码，以便登录>>";
                cin >> password;
            }
            cout << "登录成功，欢迎回来" << endl;
        }
    }
}

int main() {
    int choice;
    std::cout << "                     你好，我的朋友!" << std::endl;
    std::cout << "                  欢迎使用节点财资管理器" << std::endl;
    uso();
    cout << "****************************************************************************" << endl;
    std::cout << "请问您需要什么服务？" << std::endl;
    std::cout << "                  1) 设置金格" << std::endl;
    std::cout << "                  2) 花费" << std::endl;
    std::cout << "                  3) 收入" << std::endl;
    std::cout << "                  4) 查看金格" << std::endl;
    std::cout << "                  5) 退出" << std::endl;
    cout << ">>";
    std::cin >> choice;
    Managing m;
    while (choice != 5) {
        switch (choice) {
        case 1:
            int bm;
            cout << "0即退出到主界面>>";
            std::cin >> bm;
            while (bm) {

                m.setMoney(bm);
                cout << "0即退出到主界面>>";
                std::cin >> bm;
            }
            break;
        case 2:
            int sm;
            cout << "0即退出到主界面>>";
            std::cin >> sm;
            while (sm) {

                m.spendMoney(sm);
                cout << "0即退出到主界面>>";
                std::cin >> sm;
            }
            break;
        case 3:
            int mm;
            cout << "0即退出到主界面>>";
            std::cin >> mm;
            while (mm) {

                m.makeMoney(mm);
                cout << "0即退出到主界面>>";
                std::cin >> mm;
            }
            break;
        case 4:
            cout << m.getMoney() << endl;
            break;
        default:
            cout << "错误" << endl;
        }
        cout << "****************************************************************************" << endl;
        std::cout << "请问您需要什么服务？" << std::endl;
        std::cout << "                  1) 设置金格" << std::endl;
        std::cout << "                  2) 花费" << std::endl;
        std::cout << "                  3) 收入" << std::endl;
        std::cout << "                  4) 查看金格" << std::endl;
        std::cout << "                  5) 退出" << std::endl;
        cout << ">>";
        std::cin >> choice;

    };
    return 0;
}
