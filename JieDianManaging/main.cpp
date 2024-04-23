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
        cout << "               ����ע��" << endl;
        cout << "�����������û������Ա�ע��>>";
        string usernamesi;
        cin >> usernamesi;
        cout << "�������������룬�Ա�ע��>>";
        string passwordsi;
        cin >> passwordsi;
        cout << "��ȷ���������룬�Ա�ע��>>";
        string passwordsi2;
        while (passwordsi != passwordsi2) {
            cout << "�������������룬�Ա�ע��>>";
            cin >> passwordsi;
            cout << "��ȷ���������룬�Ա�ע��>>";
            cin >> passwordsi2;
        }

        user.sign_up(usernamesi, passwordsi);

    }
    else {
        cout << "                       ���ȵ�¼" << endl;



        cout << "�����������û�����ע��������0>>";
        string username;
        cin >> username;
        if (username == "0") {
            cout << "�����������û������Ա�ע��>>";
            string usernamesi;
            cin >> usernamesi;
            cout << "�������������룬�Ա�ע��>>";
            string passwordsi;
            cin >> passwordsi;
            cout << "��ȷ���������룬�Ա�ע��>>";
            string passwordsi2;
            cin >> passwordsi2;
            while (passwordsi != passwordsi2) {

                cout << "�������������룬�Ա�ע��>>";
                cin >> passwordsi;
                cout << "��ȷ���������룬�Ա�ע��>>";
                cin >> passwordsi2;
            }

            user.sign_up(usernamesi, passwordsi);

        }
        else {
            Login login;
            cout << "�������������룬�Ա��¼>>";
            string password;
            cin >> password;
            while (!login.logIn(username, password)) {
                cout << "�û������������������" << endl;
                cout << "�����������û������Ա��¼>>" << endl;
                cin >> username;
                cout << "�������������룬�Ա��¼>>";
                cin >> password;
            }
            cout << "��¼�ɹ�����ӭ����" << endl;
        }
    }
}

int main() {
    int choice;
    std::cout << "                     ��ã��ҵ�����!" << std::endl;
    std::cout << "                  ��ӭʹ�ýڵ���ʹ�����" << std::endl;
    uso();
    cout << "****************************************************************************" << endl;
    std::cout << "��������Ҫʲô����" << std::endl;
    std::cout << "                  1) ���ý��" << std::endl;
    std::cout << "                  2) ����" << std::endl;
    std::cout << "                  3) ����" << std::endl;
    std::cout << "                  4) �鿴���" << std::endl;
    std::cout << "                  5) �˳�" << std::endl;
    cout << ">>";
    std::cin >> choice;
    Managing m;
    while (choice != 5) {
        switch (choice) {
        case 1:
            int bm;
            cout << "0���˳���������>>";
            std::cin >> bm;
            while (bm) {

                m.setMoney(bm);
                cout << "0���˳���������>>";
                std::cin >> bm;
            }
            break;
        case 2:
            int sm;
            cout << "0���˳���������>>";
            std::cin >> sm;
            while (sm) {

                m.spendMoney(sm);
                cout << "0���˳���������>>";
                std::cin >> sm;
            }
            break;
        case 3:
            int mm;
            cout << "0���˳���������>>";
            std::cin >> mm;
            while (mm) {

                m.makeMoney(mm);
                cout << "0���˳���������>>";
                std::cin >> mm;
            }
            break;
        case 4:
            cout << m.getMoney() << endl;
            break;
        default:
            cout << "����" << endl;
        }
        cout << "****************************************************************************" << endl;
        std::cout << "��������Ҫʲô����" << std::endl;
        std::cout << "                  1) ���ý��" << std::endl;
        std::cout << "                  2) ����" << std::endl;
        std::cout << "                  3) ����" << std::endl;
        std::cout << "                  4) �鿴���" << std::endl;
        std::cout << "                  5) �˳�" << std::endl;
        cout << ">>";
        std::cin >> choice;

    };
    return 0;
}
