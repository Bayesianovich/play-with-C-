#include <iostream>
#include <type_traits>
using namespace std;


template <typename T>
auto printTypeInformation(const T& t){
    if constexpr (is_integral<T>::value) {
        cout << "Integral type" << endl;
    } else if constexpr (is_floating_point<T>::value) {
        cout << "Floating point type" << endl;
    } else if constexpr (is_pointer<T>::value) {
        cout << "Pointer type" << endl;
    } else {
        cout << "Other type" << endl;
    } 
}

int main(){
    printTypeInformation(5);
    printTypeInformation(5.0);
    printTypeInformation("Hello");
    printTypeInformation(&main);
    return 0;
}