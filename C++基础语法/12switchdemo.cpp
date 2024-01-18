#include <iostream>
using namespace std;

int main()
{
    char letter_grade {};
    cout << "请输入一个字母等级：";
    cin >> letter_grade;
    
    switch(letter_grade){
        case 'a':
        case 'A':
            cout << "90-100" << endl;
            break;
        case 'b':
        case 'B':
            cout << "80-89" << endl;
            break;
        case 'c':
        case 'C':
            cout << "70-79" << endl;
            break;
        case 'd':
        case 'D':
            cout << "60-69" << endl;
            break;
        default:
            cout << "不是有效的字母等级" << endl;
    }

    return 0;
}