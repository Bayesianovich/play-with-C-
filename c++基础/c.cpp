#include <iostream>
using namespace std;

int main(){
    int a [5];
    for (auto i = 0; i < 5; i++){
        cout << "Enter a number: ";
        cin >> a[i];
    }
    for (auto i = 0; i < 5; i++){
        cout << a[i] << endl;
    }
}