#include <iostream>

class Complex {
public:
    double real;
    double imag;

    // 构造函数
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // 操作符重载，实现复数的加法
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // 用于输出复数的友元函数
    friend std::ostream& operator<<(std::ostream& out, const Complex& c);
};

// 重载<<操作符，使得Complex类的对象可以直接用cout进行输出
std::ostream& operator<<(std::ostream& out, const Complex& c) {
    out << c.real;
    if (c.imag >= 0) out << '+';
    out << c.imag << 'i';
    return out;
}

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(2.0, -2.0);
    Complex c3 = c1 + c2; // 使用重载的+操作符

    std::cout << "c1 = " << c1 << std::endl;
    std::cout << "c2 = " << c2 << std::endl;
    std::cout << "c1 + c2 = " << c3 << std::endl;

    return 0;
}
