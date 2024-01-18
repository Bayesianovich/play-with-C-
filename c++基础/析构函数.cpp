#include <iostream>
class Demo {
    // 构造函数和析构函数分别在对象创建和销毁时自动调用。
public:
    Demo() { 
        std::cout << "Constructor called" << std::endl; 
    }

    ~Demo() { 
        std::cout << "Destructor called" << std::endl; 
    }
};

void function() {
    Demo localDemo; // 构造函数在这里被调用，析构函数在函数结束时被调用
}

int main() {
    function();
    std::cout << "function() called" << std::endl;
    return 0;
}