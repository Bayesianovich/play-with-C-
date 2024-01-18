#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> p1 = make_shared<int>(5);
    unique_ptr<int> p2 = make_unique<int>(6);
    cout << *p1 << ' ' << *p2 << endl;
    return 0;
}