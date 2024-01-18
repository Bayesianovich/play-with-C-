#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> student_scores {100, 90, 80};

    for(int score : student_scores) {
        cout << score << endl;
    }

    const int *score_ptr = student_scores.data();
    cout << "这是score_ptr的地址: " << reinterpret_cast<const void*>(score_ptr) << endl;

    cout <<"======数组名称,下标方式访问元素" << endl;
    cout << student_scores[0] << endl;
    cout << student_scores.at(1)<< endl;
    cout << student_scores[2] << endl;

    cout <<"======指针方式访问元素" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    // Fixed invalid pointer arithmetic on vector object
    cout <<"===============" << endl;
    cout << student_scores.front() << endl; // Provides direct access to the first element
    cout << student_scores[1] << endl;
    cout << student_scores[2] << endl;

    cout << "========++运算符====" << endl;
    cout << *score_ptr++ << endl;
    cout << *score_ptr << endl;

    return 0;
}