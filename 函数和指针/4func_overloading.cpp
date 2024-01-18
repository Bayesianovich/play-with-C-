#include <iostream>
#include <string>
#include <vector>

using namespace std;

void demo_print(int); 
void demo_print(double);
void demo_print(string);
void demo_print(string, string);
void demo_print(vector<string>);

int main()
{
    demo_print(100);
    demo_print(123.123);
    demo_print("Hello");
    demo_print("Hello", "World");
    string s {"Hello"};

    vector<string> three_stooges {"Larry", "Moe", "Curly"};
    demo_print(three_stooges);

    return 0;
}

void demo_print(int num)
{
    cout << "Printing int: " << num << endl;
}

void demo_print(double num)
{
    cout << "Printing double: " << num << endl;
}

void demo_print(string s)
{
    cout << "Printing string: " << s << endl;
}

void demo_print(string s1, string s2)
{
    cout << "Printing 2 strings: " << s1 << " and " << s2 << endl;
}

void demo_print(vector<string> v)
{
    cout << "Printing vector of strings: ";
    for (auto s: v)
        cout << s + " ";
    cout << endl;
}