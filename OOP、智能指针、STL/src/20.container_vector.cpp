/*
* vector示例
* vector是一个动态数组，可以随意增加元素
* 与array一样，vector在内存中是连续的，对应的内存空间会随着元素的增加而增加
* 获取元素的复杂度是常数，与vector的大小无关
* 在vector末尾增加、删除元素的复杂度是常数，与vector的大小无关
* 在vector中间增加、删除元素的复杂度是线性的，与vector的大小有关
* 可以使用迭代器和算法
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
//printValue 是一个函数模板，它接受一个类型为 T 的参数
//由于 T 是泛型，这个函数可以接受任何类型的参数
//每次调用时，模板函数 printValue 的实例化会自动适应传递的参数类型。这样你就不需要为不同的数据类型编写多个函数
void printVector(const std::vector<T> &v)
{
    cout << "[ ";
    for (const auto &item:v)
        cout << item << " ";
    cout << "]" << endl;
}

void test1()
{
    cout << "test1 ======================" << endl;
    std::vector<int> v1 {1,2,3,4,5};
    printVector<int>(v1);

    std::vector<int> v2 (3, 100); //10个100
    printVector<int>(v2);

    v1[0] = 100;
    v1.at(1) = 200;
    printVector(v1);
    v1.pop_back(); // 删除最后一个元素
    printVector(v1);

    v1.clear(); // 清空容器
    printVector(v1);

    std::vector<int> v3  {1,2,3,4,5,6,7,8,9,10};
    std::vector<int>:: iterator it = v1.begin();
    while (it != v1.end())
    {
        if (*it % 2 == 0)
             v1.erase(it); // 删除偶数
        else
            it++;
    }
    printVector(v3);


    v2.swap(v3);
    printVector(v2);
    printVector(v3);
}

int main(){
    test1();
    return 0;
}