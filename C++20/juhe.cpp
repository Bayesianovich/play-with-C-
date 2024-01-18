#include <iostream>

struct Base {
    int a;
    int b;
};

struct Derived : Base {
    int c;
};

int main() {
    Derived d{{1, 2}, 3};
    std::cout << d.a << ", " << d.b << ", " << d.c << std::endl;
    return 0;
}
