#include <iostream>
using namespace std;

int main(){
    int n;
    do {
        cout << "Enter a number: ";
        cin >> n;
        cout << "You entered: " << n*n << endl;
    } while (n != 0);
}
