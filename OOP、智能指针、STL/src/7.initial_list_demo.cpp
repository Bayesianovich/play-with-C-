#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Account
{
private:
    string name {"account"};
    double balance {0.0};

public:
    void printInfo();
    Account();
    Account(string name);
    Account(string name,double balance);
};

void Account::printInfo(){
     cout << "name: " << name << ", balance: " << balance << endl;
}

// 构造函数初始化列表
Account::Account():name{"account"},balance{0.0}{
    cout << "没有参数的构造函数被调用" << endl;
}

Account::Account(string name):name{name},balance{0.0}{

}
Account::Account(string name,double balance):name{name},balance{balance}{
    cout << "Account created with balance " << balance << endl;
}


int main(){
    Account *mark_account = new Account("Mark's account",1000.0);
    mark_account -> printInfo();
    delete mark_account;
}