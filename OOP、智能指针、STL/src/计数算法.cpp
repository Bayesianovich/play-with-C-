#include <algorithm> //使用标准库的算法
#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> v1 {11, 21, 3, 4, 5};

// 在C++中，count是一个通用的名称，可能会与其他标识符冲突，尤其是在使用了using namespace std;的情况下。
// 为了避免潜在的命名冲突，最佳实践是使用std::count来明确指定count函数来自于std命名空间。
// 这样可以确保代码的可读性和可维护性，并且可以避免潜在的问题。
    // auto count = count(v1.begin(), v1.end(), 3);
    auto count = std::count(v1.begin(), v1.end(), 3);
    cout << "数字2出现的次数: " << count << endl; 

    return 0;
}


