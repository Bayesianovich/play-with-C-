#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 函数原型
void change_num(int num);
void change_string(string str);
void change_vector(vector<string> vec);
void print_vector(vector<string> vec);

// 函数定义
void change_num(int num){
    num = 100;
}

void change_string(string str){
    str = "hello";
}

void change_vector(vector<string> vec){
    vec.clear();
}

void print_vector(vector<string>vec){
    for (auto &str: vec){
        cout << str <<" ";
    }
    cout << endl;
}

int main(){
    int num {10};
    cout << "num = " << num << endl;
    change_num(num);
    cout << "num = " << num << endl;

    string str {"world"};
    cout << "str = " << str << endl;
    change_string(str);
    cout << "str = " << str << endl;

    vector<string> vec {"hello", "world"};
    print_vector(vec);
    change_vector(vec);
    print_vector(vec);

    return 0;
}