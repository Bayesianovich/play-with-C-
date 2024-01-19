#include<iostream>
#include<vector>
#include<string>
#include<memory>

using namespace std;

class Account 
{
private:
    string name{"Account"};
    double balance{0.0};

public:
    Account(string name = "none", double balance = 0.0);
    ~Account();
    void print() const;
};
        
Account::Account(string name, double balance)
    : name{name}, balance{balance}
{
    cout << "Account constructor called" <<name << endl;
}

Account::~Account()
{
    cout << "Account destructor called" << name << endl;
}

void Account::print() const
{
    cout << "Account name: " << name << " balance: " << balance << endl;
}

void test_func(shared_ptr<Account> p)
{
    cout << "Use count: " << p.use_count() << endl;
}
// test_func函数是一个独立的函数，它接受一个shared_ptr<Account>，
// 并打印其引用计数，即拥有同一个Account对象的shared_ptr对象的数量。

int main()
{
    cout <<"================="<< endl;
    shared_ptr<Account> p1 = make_shared<Account>("Larry", 1000);
    shared_ptr<Account> p2 = make_shared<Account>("Moe", 2000);
    shared_ptr<Account> p3 = make_shared<Account>("Curly", 3000);

    vector<shared_ptr<Account>> accounts;
    accounts.push_back(p1);
    accounts.push_back(p2);
    accounts.push_back(p3);

    for (const auto &p: accounts)
    {
        p->print();
        cout << "Use count: " << p.use_count() << endl;
    }

    return 0;
}