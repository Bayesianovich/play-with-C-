#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // for (int i{1}, j{5}; i <= 5; ++i, --j){
    //     cout << i << " + " << j << " = " << i + j << endl;
    // }
    vector <int> nums {10, 20, 30, 40, 50};

    for (unsigned i{0}; i < nums.size(); ++i){
        cout << nums.at(i) << endl;
    }

    return 0;
}
