#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> v1 {11, 21, 3, 4, 5};
    sort(v1.begin(), v1.end(),[](int a, int b){return a > b;});

    for (auto &i :v1)
    {
        cout << i << " ";
    }

    return 0;
}