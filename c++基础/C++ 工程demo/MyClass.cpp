// 文件名: MyClass.cpp
#include "MyClass.h"

MyClass::MyClass() : myValue(0) {}

void MyClass::setMyValue(int value) {
    myValue = value;
}

int MyClass::getMyValue() {
    return myValue;
}