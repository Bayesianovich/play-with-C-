/*
* 算法示例
* STL算法基于迭代器生成的序列
* STL提供了很多算法（例如查找、排序、计数、操作），可以对序列进行操作
* 更多请查看：https://zh.cppreference.com/w/cpp/algorithm
* 多数算法要求提供额外参数，例如：排序算法需要提供排序规则，一般使用函数指针、lambda表达式或仿函数（函数对象）
*/
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void test1(){
    cout << "test1===========" << endl;
    vector<int> v1 {1, 2, 3,  4, 5};
    vector<int>::iterator loc = find(v1.begin(), v1.end(), 3);
    if (loc != v1.end())
    {
        cout << "found: " << *loc << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}

void test2(){
    cout << "test2===========" << endl;
    vector<int> v1 {1, 2, 3,3, 4, 5};
    int counts = count(v1.begin(), v1.end(), 3);

    cout << "count: " << counts << endl;
}

bool isEven(int x){
    return x % 2 == 0;
}
void test3(){
    cout << "test3===========" << endl;
    vector<int> v1 {1, 2, 3, 4, 5};
     
    int counts = count_if(v1.begin(), v1.end(), isEven);

    counts = count_if(v1.begin(), v1.end(), [](int x){return x % 2 == 0;});

    cout << "count: " << counts << endl;

    counts = count_if(v1.begin(), v1.end(), [](int x){return x > 3;});

    cout << "count: " << counts << endl;   
}

void test4(){
    cout << "test4===========" << endl;
    vector<int> v1 {1, 2, 3, 4, 5};
    for (const auto &e : v1)
    {
        cout << e << " ";
    }
    cout << endl;

    replace(v1.begin(), v1.end(), 3, 300);

    for (const auto &e : v1)
    {
        cout << e << " ";
    }
    cout << endl;
}

void test5(){
    cout << "test5===========" << endl;
    vector<int> v1 {1, 2, 3, 4, 5};
    if (all_of(v1.begin(), v1.end(), [](int x){return x > 0;}))
    {
        cout << "all > 0" << endl;
    }
    else
    {
        cout << "not all > 0" << endl;
    }
    if (any_of(v1.begin(), v1.end(), [](int x){return x > 4;}))
    {
        cout << "any > 4" << endl;
    }
    else
    {
        cout << "not any > 4" << endl;
    }
    if (none_of(v1.begin(), v1.end(), [](int x){return x < 0;}))
    {
        cout << "none < 0" << endl;
    }
    else
    {
        cout << "not none < 0" << endl;
    }
}

void test6(){
    cout << "test6===========" << endl;
    string s1  {"hello"};
    cout << s1 << endl;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout << s1 << endl;
}

int main(){
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    return 0;
}