#include <iostream>
#include <tuple>
#include <map>
using namespace std;

int main() {
    map<string, int> age_map  {{"Alex", 30}, {"Bob", 25}, {"Rex", 23}};
    for (const auto& [name, age] : age_map) {
        cout << name << " is " << age << " years old." << endl;
    }
    return 0;
}