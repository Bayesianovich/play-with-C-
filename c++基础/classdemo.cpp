// 定义一个类，本质上是定义一个数据类型的蓝图。
// 这实际上并没有定义任何数据，但它定义了类的名称意味着什么
// 它定义了类的对象包了什么，以及可以在这个对象上执行哪些操作。

#include <iostream>
#include <string>

using namespace std;

class Animal{
    public:

        int age;
        string name;
        void eat(){
            cout << "Animal eat" << endl;
        }      
};

int main(){
    Animal animal;
    animal.eat();
    animal.age = 10;
    animal.name = "cat";
    cout << "age ="<<animal.age << endl;
    cout << "name ="<<animal.name << endl;


    return 0;
}