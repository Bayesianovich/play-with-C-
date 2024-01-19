#include <iostream>
#include <string>

using namespace std;

//在使用函数模板时，需要在函数名后面的尖括号中指明模板参数。
template <typename T>
T min_func(T a, T b)
{
    return a < b ? a : b;
}
//在C++中，关键字class在模板中用于声明模板参数，不仅仅限于类
//template <class T1, class T2> 是用来定义一个函数模板或类模板的关键字。
// 它告诉编译器，接下来的函数或类将使用T1和T2作为模板参数，这
// 样在使用这个函数或类时可以传入不同的类型。
// 这样可以实现代码的通用性，使得函数或类可以适用于多种不同的数据类型。
template <class T1, class T2>
void display(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}

int main()

{
    cout << min_func<int>(1, 2) << endl;
    cout << min_func<double>(1.2, 2.3) << endl;

    display(1, 2);
    display("hello", "world");
    display(1, "world");



}