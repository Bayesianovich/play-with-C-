#include <iostream>
#include <cstdlib>
//包含cstdlib头文件以使用malloc和free

//MyStruct是一个结构体，并没有定义构造函数，
//所以new只是分配内存，不会调用任何函数。
struct MyStruct {
    int x;
    float y;
};

int main() {
    MyStruct *p1 = new MyStruct; // 使用 new
    MyStruct *p2 = (MyStruct*)malloc(sizeof(MyStruct));     // 使用 malloc

    std::cout << "Memory allocated." << std::endl;

    delete p1;// 释放 new 分配的内存
    free(p2);// 释放 malloc 分配的内存

    std::cout << "Memory freed." << std::endl;

    return 0;
}