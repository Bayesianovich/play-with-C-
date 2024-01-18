#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int student_scores[3] = {100, 90,80}
   int student_scores [] {100, 90, 80};

    cout << student_scores << endl;

    int *score_ptr {student_scores};
    cout << score_ptr << endl;

    cout <<"======数组名称,下标方式访问元素" << endl;
    cout << student_scores[0] << endl;
    cout << student_scores[1]<< endl;
    cout << student_scores[2] << endl;

    cout <<"======指针方式访问元素" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    cout <<"======指针方式访问元素" << endl;
    cout << *student_scores << endl;
    cout << *(student_scores + 1) << endl;
    cout << *(student_scores + 2) << endl;


    cout << "========++运算符====" << endl;
    cout << *score_ptr << endl;
    cout << *score_ptr++<< endl;

    return 0;
}