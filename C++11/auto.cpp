#include <iostream>
#include <vector>
using namespace std;

int main() {
    auto x = 5;
    auto y = 3.37;
    vector <int> a {1, 2, 3};
    for (auto i : a) {
        cout << i << endl;
    }
    return 0;
}