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
    void print() const;
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
void Account::print() const
{
    cout << "name: " << name << ", balance: " << balance << endl;
}

void test_func(shared_ptr<Account> p)
{
    cout << "p.use_count(): " << p.use_count() << endl; // 2
}

int main()
{
    // cout << "=====================" << endl;
    // shared_ptr<int> p1 {new int {100}};
    // cout << "p1.use_count(): " << p1.use_count() << endl; // 1

    // shared_ptr<int> p2 {p1}; // 共享所有权
    // cout << "p1.use_count(): " << p1.use_count() << endl; // 2

    // p1.reset(); // 释放所有权，但是不会销毁对象，因为p2还在使用
    // cout << "p1.use_count(): " << p1.use_count() << endl; // 0
    // cout << "p2.use_count(): " << p2.use_count() << endl; // 1


    // cout << "=====================" << endl;
    // shared_ptr<Account> p1 = make_shared<Account>("Alice", 1000.0);
    // test_func(p1);
    // cout << "p1.use_count(): " << p1.use_count() << endl; // 2

    // {
    //     shared_ptr<Account> p2 = p1;
    //     cout << "p2.use_count(): " << p2.use_count() << endl; // 3

    //     {
    //         shared_ptr<Account> p3 = p1;
    //         cout << "p3.use_count(): " << p3.use_count() << endl; // 4
            
    //         p1.reset();
    //     }
    //     cout << "p1.use_count(): " << p1.use_count() << endl; // 2
    //     cout << "p2.use_count(): " << p2.use_count() << endl; // 2
    // }
    // cout << "p1.use_count(): " << p1.use_count() << endl; // 1



    cout << "=====================" << endl;
    shared_ptr<Account> p1 = make_shared<Account>("Alice", 1000.0);
    shared_ptr<Account> p2 = make_shared<Account>("Bob", 2000.0);
    shared_ptr<Account> p3 = make_shared<Account>("Charlie", 3000.0);

    vector<shared_ptr<Account>> accounts;

    accounts.push_back(p1);
    accounts.push_back(p2);
    accounts.push_back(p3);

    for (const auto &p: accounts)
    {
        p->print();
        cout << "p.use_count(): " << p.use_count() << endl; // 1
    }
    return 0;
}