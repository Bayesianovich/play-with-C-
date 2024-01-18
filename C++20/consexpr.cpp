#include <iostream>
#include <memory>
using namespace std;


constexpr int factorial(int n){
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main(){
    auto x = factorial(5);
    cout << "5! = " << x << endl;
    return 0;
}