#include <iostream>
using namespace std;


int main()
{
    int input_num {0};
    const int target_num {10};

    cout << "请输入一个整数,我将与"<<target_num<<"比较" << endl;
    cin >> input_num;

    if (input_num <= target_num)
        cout << input_num << "小于等于" << target_num << endl;
    else
        cout << input_num << "大于" << target_num << endl;

    return 0;

}