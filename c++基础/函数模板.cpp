#include <iostream>
#include <string>

using namespace std;

// 函数模板Max使用关键字template定义，后面跟着模板参数< >。
// 在这个例子中，typename T就是模板参数。
// T是一个占位符，代表任何在使用这个函数时提供的数据类型。

// 函数Max接受两个参数，a和b，它们都是T const&类型。
// const&表示函数不会修改参数，并且通过引用接收它们，这比复制值更有效，
// 特别是对于大型数据类型。

// 函数返回a和b中的最大值的引用。
// inline关键字建议编译器尝试在每个调用函数的地方插入完整的函数体，
// 而不是在定义函数的地方调用函数。
// 这样可以提高程序的执行效率，但是会增加程序的体积。
// 内联函数可以减少函数调用的开销 对于小型函数，函数调用的开销可能会超过函数体内的计算开销。内联函数可以消除这种开销。

template <typename T>
inline T const& Max(T const& a, T const& b){
    return a < b ? b : a;
}

int main(){
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;

    return 0;
}
