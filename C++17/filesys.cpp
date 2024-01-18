#include <iostream>
#include <filesystem>
using namespace std;

namespace fs = filesystem;

int main(){
    fs:: path p = fs::current_path();
    cout << "the current path is"<< p << '\n';
    return 0;
}