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
    string getName() {return name;}
    double getBalance() {return balance;}
    //构造函数
    Account(string name = "none",double balance = 0.0);
    //析构函数
    ~Account();
    //拷贝构造函数
    Account(const Account &source);
};

Account::Account(string name,double balance):name{name},balance{balance}
{
     cout << "2个参数的构造函数被调用，name：" << name << endl;
}
Account::~Account(){
     cout << "析构函数被调用，name：" << name << endl;
}

// 拷贝构造函数：根据已存在对象的属性来更新新对象的属性（name,balance）
// const Account &source 表示一个对同一类的对象的常量引用。
// 使用常量引用的目的是为了避免对源对象进行修改，并且能够处理传递给拷贝构造函数的临时对象。

Account::Account(const Account &source):name{source.name},balance {source.balance}
{
        cout << "拷贝构造函数被调用，是" << source.name << "的拷贝" << endl;
}
// 打印账户信息
void printAccountInfo(Account acc)
{
    cout << acc.getName() << "的余额是：" << acc.getBalance() << endl;
}

int main()
{

    Account alice_account {"Alice's account", 1000.0};
    Account new_account {alice_account}; // 拷贝构造函数被调用
    return 0;
}