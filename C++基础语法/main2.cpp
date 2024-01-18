#include <iostream>
using namespace  std;

int main (int argc, char** argv)
{
    cout << "参数数量"<< argc << endl;
    cout <<"===============" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "参数" << i << ":" << argv[i] << endl;
    }
}