#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Accout
{
private:
    double balance {0.0};

public:
    string name {"account"};
// 这里的 const 关键字表示该成员函数是一个常量成员函数。
// 常量成员函数承诺不会修改对象的成员变量
//在常量成员函数中，任何修改成员变量的操作都是不允许的
    void set_new_name(string new_name) const{
        //name = new_name;
    }
// 这里的 const 关键字也表示该成员函数是一个常量成员函数。
// 在 get_name 函数中，const 关键字表明该函数不会修改对象的成员变量，
// 从而使得在常量对象上也可以调用该函数。
    string get_name() const{
        return name;
    }
// 构造函数
    Accout(string name = "none",double balance =0.0);
    ~Accout();
};

Accout::Accout(string name,double balance):balance{balance},name{name}
{
    cout<<"Account constructor called for "<<name<<endl;
}
Accout::~Accout()
{
    cout<<"Account destructor called for "<<name<<endl;
}

int main()
{
    const Accout frank_account {"Frank",5000.0};
    frank_account.set_new_name("frank");
    cout<<frank_account.get_name()<<endl;

    return 0;
}