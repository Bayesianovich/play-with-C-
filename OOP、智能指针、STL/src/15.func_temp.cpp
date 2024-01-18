#include <iostream>
#include <string>

using namespace std;

template <typename T>
T min_func(T a, T b)
{
    return a < b ? a : b;
}

template <class T1, class T2>
void display(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}

int main()
{
    // std::cout << min_func<int>(1, 2) << std::endl;
    // std::cout << min_func(1, 2) << std::endl;
    // std::cout << min_func('B', 'A') << std::endl;
    // std::cout << min_func(3.3, 2.2) << std::endl;
    // std::cout << min_func(5 + 2 * 9, 7 + 2 * 4) << std::endl;

    display<int, int>(1, 2);
    display(20, 30);
    display<char, double>('A', 3.3);
    display("Hello", "World");
    display(2000, string{"Hello"});
    
    return 0;
}