#include <iostream>
using namespace std;

void func(int){
    cout << "func(int) called" << endl;
}

void func(char*){
    cout << "func(char*) called" << endl;
}

int main(){
    func(nullptr); //明确调用func(int)
    return 0;
}