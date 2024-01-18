#include <iostream>
#include <concepts>
using namespace std;

template <typename T>
concept Addable = requires(T a, T b) {
    {a + b} -> same_as<T>;
};

template <Addable T>
T add(T a, T b){
    return a + b;
}

int main(){
    cout << add(5, 6) << endl;
    cout << add(5.0, 6.0) << endl;
    return 0;
}