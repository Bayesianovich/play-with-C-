#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <char> vowels {'a','e','i','o','u'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;


    vector <int> student_scores {100,98,89};
    cout << "array style" << student_scores[0] << endl;
    cout << "vector style" << student_scores.at(1) << endl;
    cout << "size of vector" << student_scores.size() << endl;
    

    cout << "=================" << endl;
    cout << "修改vector的元素" << endl;
    cin >> student_scores.at(0);
    cin >> student_scores.at(1);
    cout << student_scores.at(1) << endl;


    cout << "=================" << endl;
    int new_add_score {0};
    cout << "请输入新的分数" << endl;
    cin >> new_add_score;
    student_scores.push_back(new_add_score);
    cout << student_scores.at(3) << endl;


    cout << "=================" << endl;
    vector <vector<int>> vector_2d {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(0).at(2) << endl;
}