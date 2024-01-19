#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(10);
    iota(v.begin(), v.end(), 1);

    for (auto &e : v)
    {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}