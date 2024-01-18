#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

int main(){
   vector<int> m{0, 15, 90, 13, 12,17,14,16,19,20,1,23,18,11,31,32,3,67,98};

   auto start = chrono::high_resolution_clock::now();

   for (auto i {0}; i < m.size(); i++){
       if (m[i] == 1){
           cout << "Found 1 " << endl;
           break;
       }
   }

   auto stop = chrono::high_resolution_clock::now();
   auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

   cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;

   return 0;
}
