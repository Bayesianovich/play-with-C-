#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_by_ref1(int &num)
{
    num = 100;
}

void pass_by_ref2(string &s)
{
    s = "Changed";
}

void pass_by_ref3(vector<string> &v)
{
    v.clear();
}

void print_vector(const vector<string> &v)
{
    for(auto s:v)
    {
        cout << s << " ";
    }
    cout << endl;
}


int main(){
    int my_num {19};
    cout << my_num << endl;
    pass_by_ref1(my_num);
    cout << my_num << endl;


    string my_str {"Hello"};
    cout << my_str << endl;
    pass_by_ref2(my_str);
    cout << my_str << endl;


    vector<string> my_vec {"Larry","Moe","Curly"};
    print_vector(my_vec);
    pass_by_ref3(my_vec);
    print_vector(my_vec);

    return 0;
}