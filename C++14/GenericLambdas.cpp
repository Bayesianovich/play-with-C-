#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    auto print = [](const auto& n) { cout << n << ' '; };
    for_each(v.begin(), v.end(), print);
    return 0;
}
