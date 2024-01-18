#include <iostream>
#include <compare>

class Point {
public:
    int x, y;
    auto operator<=>(const Point&) const = default;
};

int main() {
    Point p1{1, 2}, p2{3, 4};
    std::cout << ((p1 <=> p2) < 0 ? "p1 is less than p2" : "p1 is not less than p2") << '\n';
    return 0;
}
