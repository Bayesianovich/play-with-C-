#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

class Account 
{
private:
    string name {"account"};
    double balance {0.0};

public:
    Account(string name="none",double balance=0.0);
    ~Account();
    bool deposit(double amount);
    void printInfo() const;
    double getBalance();
};

Account::Account(string name,double balance)
    :name{name},balance{balance}
{
    cout << "Account constructor called"<<name << endl;
}

Account::~Account()
{
    cout << "Account destructor called" << name <<endl;
}

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

void Account::printInfo() const
{
    cout << "Account name: " << name << " balance: " << balance << endl;
}

double Account::getBalance()
{
    return balance;
}

int main(){
    vector<unique_ptr<Account>>accounts;
    accounts.push_back(make_unique<Account>("account1",1000));
    accounts.push_back(make_unique<Account>("account2",2000));
    accounts.push_back(make_unique<Account>("account3",3000));

    for (const auto &acc:accounts)
        cout << acc->getBalance() << endl;
    
    return 0;
    }

// 使用 unique_ptr 和 make_unique 的目的是为了管理动态分配的 Account 对象，
// 并确保在适当的时候释放内存，以避免内存泄漏。

// unique_ptr 是C++11引入的智能指针，它提供了独占所有权的语义，
// 即同一时间只能有一个 unique_ptr 指向一个对象。
// 当 unique_ptr 超出作用域或被销毁时，它所管理的对象会被自动释放。

// make_unique 是C++14引入的函数模板，用于动态分配并初始化一个对象，
// 并返回一个对应的 unique_ptr。它可以避免显式地使用 new 和 delete，
// 从而减少内存泄漏的风险。