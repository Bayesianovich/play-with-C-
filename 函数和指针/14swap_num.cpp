#include <iostream>
using namespace std;

void swap_value(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x {100}, y {200};
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    swap_value(&x, &y);
    cout << "=============" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}