#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


// 在C++中，仿函数（Functor）是一种使用类重载 operator() 来模拟函数行为的技术。
struct Compare{
    bool operator()(int a, int b){
        return a > b;
    }
};

int main(){
    vector<int>vec = {4,3,1,5,2};
    sort(vec.begin(), vec.end(), Compare());

    for (auto &item:vec)
        cout << item << " ";
    cout << endl;

    return 0;
}

