// 文件名: main.cpp
#include <iostream>
#include "MyClass.h"

int main() {
    MyClass obj;
    obj.setMyValue(5);
    std::cout << "My Value: " << obj.getMyValue() << std::endl;
    return 0;
}