// 文件名: MyClass.h
#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
public:
    MyClass();
    void setMyValue(int value);
    int getMyValue();
private:
    int myValue;
};

#endif