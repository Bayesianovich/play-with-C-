#include <iostream>
using namespace std;

constexpr int factorial(int n){
    return n <= 1 ? 1 : (n * factorial(n - 1));
}

int main() {
    cout << "4! = " << factorial(4) << endl;
    return 0;
}