#include <iostream>
#include <vector>

using namespace std;
int main()
{
    cout << "==============" << endl;
    int score {10};
    
    //定义了一个指向整数的指针变量 score_ptr，并将其初始化为指向 score 变量的地址。
    int *score_ptr {&score};
    
    cout << score_ptr << endl;
    cout << *score_ptr << endl;

    *score_ptr = 200;
    cout << *score_ptr << endl;
    cout << score << endl;

    cout << "==============" << endl;
    double high_temp {100.7};
    double low_temp {37.4};

    double *temp_ptr {&high_temp};
    cout << *temp_ptr << endl;

    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;

    cout << "==============" << endl;
    string name {"Frank"};
    string *string_ptr {&name};
    
    cout << *string_ptr << endl;
    name = "James";
    // 更新了 name 变量的值，但是指针变量 string_ptr 仍然指向原来的地址，所以输出的还是原来的值。
    cout << *string_ptr << endl;

    cout << "==============" << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {&stooges};
    cout << "First stooge: " << (*vector_ptr).at(0) << endl;
    cout << (*vector_ptr).at(1) << endl;


    cout << "==============" << endl;
    for (auto stooge: *vector_ptr)
        cout << stooge << " ";
    cout << endl;

    return 0;

}