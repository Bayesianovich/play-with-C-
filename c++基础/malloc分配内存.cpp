#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass {
    public:
        MyClass() {
            cout << "Constructor is called." << endl;
        }
        ~MyClass() {
            cout << "Destructor is called." << endl;
        }

};

int main(){
    MyClass *p = (MyClass*)malloc(sizeof(MyClass));
    // 通过malloc分配的内存不会调用构造函数
    //通过new分配的内存会调用构造函数
    new (p) MyClass();

    // 通过free释放的内存不会调用析构函数
    // 通过delete释放的内存会调用析构函数
    // 在释放前需要显式调用析构函数
    p->~MyClass();
    free(p);
}
