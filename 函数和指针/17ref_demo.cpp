#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int my_num {10};
    // 是在创建一个整数引用 my_ref，并将其初始化为引用 my_num。
    // 引用是一个别名，它提供了对现有变量的另一个名称
    // my_ref 成为 my_num 的另一个名称，它们实际上指向同一个内存位置。
    int &my_ref {my_num};

    cout << "my_num: " << my_num << endl;
    cout << "my_ref: " << my_ref << endl;

    my_ref = 100;
    cout << "my_num: " << my_num << endl;
    cout << "my_ref: " << my_ref << endl;

    vector<string>my_str{"Larry", "Moe", "Curly"};
    cout << "====================" << endl;
    for (auto str : my_str)
        str = "Funny"; // str is a COPY of the current vector element
    
    for (auto str : my_str)
        cout << str << endl;

    cout << "====================" << endl;
    for (auto &str : my_str) // str is a reference to the current vector element
        str = "Funny";
    
    for (auto const &str : my_str) // str is a reference to the current vector element
        cout << str << endl;

    cout << "====================" << endl;
    //，str 是当前元素的常量引用。
    //这意味着在循环内部不能修改 str 所引用的元素，因为 str 是一个常量引用
    for (auto const &str: my_str)
        //str = "Funny"; // Compiler error
        cout << str << endl;
}