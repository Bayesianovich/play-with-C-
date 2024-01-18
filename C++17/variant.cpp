#include <iostream>
#include <variant>
using namespace std;


int main() {
    variant<int, float> v;
    v = 12; //v contains int
    cout <<"Integer value of v is " << get<int>(v) << '\n';
    v = 3.14f; // v contains float
    cout <<"Float value of v is " << get<float>(v) << endl;
    return 0;
}