#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


// compare函数定义了一种升序排列的方式，因为它返回true当且仅当a大于b。
// 这使得std::sort在排序v1时会按照compare函数的规则进行排序，从而实现了升序排列。
bool compare(int a, int b){
    return a > b; // 升序排列
}

int main(){
    vector<int> v1 {11, 21, 13, 41, 5};
    // std::sort算法的第三个参数compare实际上是一个函数指针。
    //在C++中，函数名可以隐式转换为指向函数的指针
    sort(v1.begin(), v1.end(), compare);

    for (auto &item:v1)
        cout << item << " ";
    cout << endl;

    return 0;
}


// 显式
// #include <iostream>
// using namespace std;

// // 定义一个函数，接受两个整数并返回它们的和
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     // 声明一个函数指针，指向接受两个整数并返回整数的函数
//     int (*functionPtr)(int, int);

//     // 将函数指针指向add函数
//     functionPtr = &add;

//     // 通过函数指针调用add函数
//     int result = functionPtr(3, 4);
//     cout << "Result: " << result << endl;

//     return 0;
// }