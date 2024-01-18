#include <iostream>
#include <unordered_map>
#include <chrono>
using namespace std;


int main(){
    unordered_map<int, int> m;

    auto start = chrono::high_resolution_clock::now();

    m[0] = true;
    m[15] = true;
    m[90] = true;
    m[13] = true;
    m[12] = true;
    m[17] = true;
    m[14] = true;
    m[16] = true;
    m[19] = true;
    m[20] = true;
    m[1] = true;
    m[23] = true;
    m[18] = true;
    m[11] = true;
    m[31] = true;
    m[32] = true;
    m[3] = true;
    m[67] = true;
    m[98] = true;




    if (m.find(1) != m.end()){
        cout << "Found 1" << endl;
    }

    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;

    return 0;
}
