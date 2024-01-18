#include <iostream>
#include <string>   

//命名空间用于组织代码以避免名称冲突。
// swap 函数可能会与 std 命名空间中的 swap 函数产生冲突。
// 为了避免这种情况，你可以将你的 swap 函数放入自己的命名空间中。
namespace myspace{
    template <typename T>
    void swap(T& a, T& b){
        T temp = a;
        a = b;
        b = temp;
    }

}

using namespace std;

int main(){
    int a = 1;
    int b = 2;
    myspace::swap(a, b);
    cout << a <<" "<< b << endl;

    string s1 = "hello";
    string s2 = "world";
    myspace::swap(s1, s2);
    cout << s1 <<" "<< s2 << endl;

    return 0;
}