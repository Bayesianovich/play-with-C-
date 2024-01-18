#include <iostream>
#include <vector>
#include <string>

using namespace std;

// - const vector<string> 表示指向的是一个 const 向量，即函数内部不能通过指针修改向量的内容。
// - *const v 表示指针本身是一个常量，即指针本身不能指向其他位置。
void display(const vector<string> *const v)
{
    for (auto str : *v)
        cout << str << " ";
}

void display(int *array, int sentinel)
{
    while (*array != sentinel)
        cout << *array++ << " ";
    cout << endl;
}

int main(){
    vector <string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);

    cout << "====================" << endl;
    int student_scores [] {100, 90, 80, 70, -1};
    display(student_scores, -1);

    return 0;
}