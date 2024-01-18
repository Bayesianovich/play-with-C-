#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account
{
private:
    string name{"account"}; 
    double balance {0.0};
    static int num_accounts; // 静态成员变量

public:
    static int get_num_accounts(); // 静态成员函数
    Account(string name = "none",double balance =0.0);
    ~Account();
};

int Account::num_accounts {0}; // 静态成员变量的初始化

Account::Account(string name,double balance):balance{balance},name{name}
{
    ++num_accounts;
    cout<<"Account constructor called for "<<name<<endl;
}

Account::~Account()
{
    --num_accounts;
    cout<<"Account destructor called for "<<name<<endl;
}

int  Account::get_num_accounts(){
    return num_accounts;
}

int main(){
    cout<<Account::get_num_accounts()<<endl;
    Account frank_account {"Frank",5000.0};
    cout<<Account::get_num_accounts()<<endl;
    Account jim_account {"Jim",6000.0};
    cout<<Account::get_num_accounts()<<endl;
    return 0;
}