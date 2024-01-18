#include <iostream>
using namespace std;

void double_data(int *int_ptr);

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

int main()
{
    int value {20};

    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;

    int *int_ptr {nullptr}; // Pointer initialized to nullptr
    int_ptr = &value; // int_ptr now holds the address of value
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    return 0;
}