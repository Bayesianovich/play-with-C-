#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Account
{
private:
    // 属性
    string name {"account"};
    double *balance {nullptr};
public:
    double get_balance() {return *balance;}; // 获取余额
    string get_name() {return name;}; // 获取名字

    //构造函数
    Account(string name="none",double balance = 0.0);
    // 拷贝构造函数
    Account(const Account &source);
    // 析构函数
    ~Account();
};

Account::Account(string name, double balance)
    {
        this->name = name;
        this->balance = new double {balance}; // 堆上分配内存
        cout << "2个参数的构造函数被调用，name: " << name << endl;
    }

//拷贝构造函数
Account::Account(const Account &source):Account {source.name, *source.balance}
{
     cout << "拷贝构造函数被调用，是" << source.name << "的拷贝" << endl;
}

Account::~Account(){
    if (balance!= nullptr)
        delete balance;
    cout << "析构函数被调用，name: " << name << endl;
}

int main()
{
    // 演示浅拷贝和深拷贝
    Account alice_account {"Alice", 1000.0};
    Account new_account {alice_account}; // 拷贝构造函数被调用
    // cout << new_account.get_balance() << endl; // 1000.0
    return 0;
}