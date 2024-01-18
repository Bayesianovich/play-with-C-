# include <iostream>
using namespace std;

// int main(){
//     int *ptr ;
int main() {
    int value = 0; // 初始化一个变量value
    int *ptr = &value; // 让ptr指向value的地址
    cout << "ptr的地址是:" << &ptr << endl;
    cout << "value的值是:" << &value << endl;
    cout << "ptr的值是:" << ptr << endl;
    cout << "*ptr的值是:" << *ptr << endl; // 打印ptr指向的值

    return 0;
}

// &ptr得到的是指针ptr自身的内存地址。
// 这不同于ptr所指向的地址，也就是value的地址。

// &value得到的是变量value的内存地址。这就是ptr所指向的地址。

// ptr得到的是指针ptr存储的值，也就是value的内存地址。--------------------

// *ptr是解引用运算符，它得到的是ptr所指向的变量的值。
// 在这个例子中，它得到的是value的值，也就是0。


// int *ptr和int* ptr在C++中是等价的，都是声明一个指向整数的指针。
// 星号*是指针声明的一部分，它可以紧挨着类型（如int*），
// 也可以紧挨着变量名（如*ptr）。
// 这只是风格问题，没有正确或错误的答案，取决于个人或团队的编程习惯。

// 然而，当声明多个指针时，需要注意的是星号*是和变量名绑定的，而不是类型。
// 例如，int* ptr1, ptr2;只有ptr1是指针，而ptr2是一个整数。
// 如果你想声明两个指针，应该写成int *ptr1, *ptr2;
// 或者int* ptr1, *ptr2;。
