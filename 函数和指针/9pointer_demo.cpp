#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    cout << "==============" << endl;
    int my_num {10};
    cout << my_num << endl;
    cout << &my_num << endl;
    cout << sizeof my_num << endl;

    cout << "==============" << endl;
    int *my_ptr {nullptr};
    cout << my_ptr << endl;
    cout << sizeof my_ptr << endl;
    cout << &my_ptr << endl;

    cout << "==============" << endl;
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    string *p4 {nullptr};
    vector<string> *p5 {nullptr};

    cout << sizeof p1 << endl;
    cout << sizeof p2 << endl;
    cout << sizeof p3 << endl;
    cout << sizeof p4 << endl;
    cout << sizeof p5 << endl;

    cout << "==============" << endl;
    int score {10};
    double high_temp {100.7};

    int *score_ptr {nullptr};
    score_ptr = &score;


    cout << score_ptr << endl;
    cout << *score_ptr << endl;
    cout << score << endl;
    cout << &score << endl;
    cout << (score_ptr == &score) << endl;
    cout << (*score_ptr == score) << endl;
   

    return 0;

}