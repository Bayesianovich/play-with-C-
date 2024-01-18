#include <iostream>
#include <ranges>
#include <vector>
using namespace std;


int main() {
    vector<int> v {1, 2, 3, 4, 5,6, 7, 8, 9, 10};
    auto  even = v | views::filter([](int i) { return i % 2 == 0; });
    for (int i : even) {
        cout << i << " ";
    }
    return 0;
}