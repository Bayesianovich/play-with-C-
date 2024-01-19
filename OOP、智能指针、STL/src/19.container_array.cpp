/*
* array容器示例
* array大小固定，不可改变
* 在内存中是连续的
* 获取元素的复杂度是常数，与array元素个数无关
* 是对原始数组的封装，也可以获取原始数组的指针
* 如果数组大小固定，尽量使用array，而不是使用C++原生数组，因为array可以使用标准库的算法
*/

#include <iostream>
#include <array> //使用array容器
#include <algorithm> //使用标准库的算法
#include <numeric>

// const std::array<int, 5> &arr 表示arr是一个只读的引用，
// 这样可以确保在display函数中不会意外地修改arr容器。
void display(const std::array<int, 5> &arr)
{
    std::cout << "[ ";
    //const关键字的作用是用来指示编译器在编译时对变量进行只读保护。const auto &i 表示i是一个只读的引用
    for (const auto &i:arr)
        std::cout << i << " ";
    std::cout << "]";
    std::cout << std::endl;
}

void test1()
{
    std::cout << "test1 ======================" << std::endl;
    std::array<int, 5> arr1 {1,2,3,4,5}; //初始化列表
    std::array<int, 5> arr2; //默认初始化，没有初始化元素，元素值是不确定的

    display(arr1);
    display(arr2);

    arr2 = {10,20,30,40,50};
    display(arr2);

    std::cout << "第一个元素: " << arr2.front() << std::endl;
    std::cout << "最后一个元素: " << arr2.back() << std::endl;
    std::cout << "数组的大小: " << arr2.size() << std::endl;

    arr1.fill(0); //用指定的值填充数组
    display(arr1);

    arr1.swap(arr2);
    display(arr1);
    display(arr2);
}

void test2(){
    std::cout << "test2 ======================" << std::endl;
    std::array<int, 5> arr1 {1, 2, 3, 4, 5};
    std::array<int, 5> arr2 {10, 20, 30, 40, 50};

    display(arr1);
    display(arr2);

    arr1.fill(0);
    display(arr1);
    display(arr2);
}

void test3(){
    std::cout << "test3 ======================" << std::endl;
    std::array<int, 5> arr1 {1, 2, 3, 4, 5};
    int *ptr = arr1.data(); //返回数组的首地址
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    *ptr = 10000;
    display(arr1);
}

void test4(){
    std::cout << "test4 ======================" << std::endl;
    std::array<int, 5> arr1 {2, 1, 4, 5, 3};
    std::array<int,5>::iterator minNum = std::min_element(arr1.begin(), arr1.end());
    auto maxNum = std::max_element(arr1.begin(), arr1.end());

    std::cout << "最小值: " << *minNum << std::endl;
    std::cout << "最大值: " << *maxNum << std::endl;

}

int main(){
    // test1();
    // test2();
    // test3();
    test4();

    return 0;
}