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
    void setName(string name){
        this->name = name;
    };

    Account(){
        cout << "没有参数的构造函数被调用" << endl;
    };

    Account(string name){
        cout << "Account created for " << name << endl;
    };

    Account(double balance){
         cout << "带double balance参数的构造函数被调用" << endl;
    };
    
    Account(string name,double balance){
        cout << "Account created with balance " << balance << endl;
    };

    ~Account(){
        cout << "Account destroyed for " << name << endl;
    };

};

int main()
{
    {
        Account alice_account;
        alice_account.setName("Alice");
    }
    {
        Account jobs_account;
        jobs_account.setName("Bob's Account");

        Account bill_account("Bill's Account");
        bill_account.setName("Bill");

        Account steve_account(1000.0);
        steve_account.setName("'Steve's account");
    }

    Account *mark_account = new Account("Mark's account", 1000.0);
    mark_account->setName("Mark's account");
    delete mark_account;

    return 0;

}

