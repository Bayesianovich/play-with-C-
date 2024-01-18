#include <iostream>
using namespace std;

int main(){
    int input_num {0};
    const int lower_limit {10};
    const int upper_limit {20};

    cout << "请输入一个介于" << lower_limit << "和" << upper_limit << "之间的整数：";
    cin >> input_num;

    if(input_num >= lower_limit){
        cout << "\n==============================" << endl;
        cout << input_num << "大于等于" << lower_limit << endl;
        int diff {input_num - lower_limit};
        cout << input_num << "比" << lower_limit << "大" << diff << endl;
    }

    if(input_num <= upper_limit){
        cout << "\n==============================" << endl;
        cout << input_num << "小于等于" << upper_limit << endl;
        int diff {upper_limit - input_num};
        cout << input_num << "比" << upper_limit << "小" << diff << endl;
    }

    return 0;
}