#include <iostream>

inline constexpr int square(int x) { return x * x; }

int main () {
    std::cout << square(5) << std::endl;
    return 0;
}
