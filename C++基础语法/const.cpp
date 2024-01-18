#include <iostream>
using namespace std;

int main()
{
    const double pi {3.14159};
    cout << "input radius: ";
    double radius {8};
    cout << "area is: " << pi * radius * radius << endl;

    return 0;
}
