#include <iostream>

class Base {
    public:
        virtual void print() {
            std::cout << "Base" << std::endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            std::cout << "Derived" << std::endl;
        }
};

int main() {
    // 创建了一个Derived类的对象，并将其地址赋给了Base类指针b。
    // 这是多态的关键：一个基类指针可以指向其任何派生类的对象。
    Base *b = new Derived();
    // 通过基类指针b调用print函数。
    // 由于print函数在Base类中被声明为虚函数，
    // 所以这里会调用Derived类中的print函数（如果存在）。
    // 这就是虚函数的动态绑定特性。
    b->print();
    delete b;
    return 0;
}