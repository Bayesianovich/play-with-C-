# include <iostream>
using namespace std;

template <typename T>
constexpr T pi = T(3.1415926535897932385); // variable template

int main(){
    cout << "pi<float> = " << pi<float> << endl;
    cout << "pi<double> = " << pi<double> << endl;
    cout << "pi<long double> = " << pi<long double> << endl;
    return 0;
}
