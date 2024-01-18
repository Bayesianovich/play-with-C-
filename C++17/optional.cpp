#include <iostream>
#include <optional>
using namespace std;

optional<int>maybeGetInt(bool condition){
    if (condition) return 42;
    else return {};
}

int main(){
    auto val = maybeGetInt(true);
    if (val) cout << "val has value " << *val << endl;
    else cout << "val has no value" << endl;
    return 0;
}