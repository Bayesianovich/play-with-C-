#include <iostream>
using namespace std;

int main(){
    //字符型
    cout << "=================" << endl;
    char my_char {'j'};
    cout << "my_char : " << my_char << endl;

    //整型
    cout << "=================" << endl;
    short my_short {29};

    cout << "my_short : " << my_short << endl;

    short overflow_short  {32767};
    cout << "overflow_short : " << overflow_short << endl;


    int my_height {170};
    cout << "my_height : " << my_height << endl;

    long people_in_hangzhou {10360000};
    cout << "people_in_hangzhou : " << people_in_hangzhou << endl;

    long long people_in_earth {70'0000'0000};
    cout << "people_in_earth : " << people_in_earth << endl;


    //浮点型
    cout << "=================" << endl;
    float my_float {3.1415f};
    cout << "my_float : " << my_float << endl;

    double my_double {3.1415926};
    cout << "my_double : " << my_double << endl;

    //布尔型
    cout << "=================" << endl;
    bool my_bool {true};
    cout << "my_bool : " << my_bool << endl;
    return 0;
}