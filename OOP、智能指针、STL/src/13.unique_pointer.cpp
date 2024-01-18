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
    Account(string name = "none", double balance = 0.0);
    ~Account();
    bool deposit(double amount);
    void printInfo() const;
    double getBalance();
};

Account::Account(string name, double balance)
    :name {name}, balance {balance}
{
    cout << "构造函数，name: " << name << endl;
}

Account::~Account()
{
    cout << "析构函数，name: " << name << endl;
}
bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

void Account::printInfo() const
{
    cout << "name: " << name << ", balance: " << balance << endl;
}
double Account::getBalance()
{
    return balance;
}

int main()
{
    
    // Account alice_account {"Alice", 1000.0}; // 构造函数和析构函数都会被调用

    // Account * bob_account = new Account {"Bob", 2000.0}; // 只有构造函数被调用
    // delete bob_account; // 析构函数被调用

    // unique_ptr<Account> p1 {new Account {"jams", 1000.0}}; // 构造函数和析构函数都会被调用

    // auto p2 = make_unique<Account>("mike", 2000.0); // 构造函数和析构函数都会被调用
    // unique_ptr<Account> p3;

    // // p3 = p2; // 报错，因为unique_ptr不允许拷贝，只能移动
    // p3 = move(p2); // p2 会被置为null

    // if (! p2)
    //     cout << "p2 is null" << endl;

    // auto p4 = make_unique<Account>("Helen", 3000.0);
    // p4->deposit(1000.0);
    // p4->printInfo(); // 调用成员函数

    vector<unique_ptr<Account>> accounts;
    accounts.push_back( make_unique<Account>("alice",1000));
    accounts.push_back( make_unique<Account>("bob",500));
    accounts.push_back( make_unique<Account>("mike",1000));

    for (const auto &acc: accounts) 
        cout << acc->getBalance() << endl;



    return 0;
}