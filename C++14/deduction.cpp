#include <iostream>
using namespace std;

auto add(int x, int y){
    return x + y; // return type will be deduced : int
}

int main() {
    cout << "3 + 4 = " << add(3, 4) << endl;
    return 0;
}