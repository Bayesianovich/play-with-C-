#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> ageMap;

    ageMap["John"] = 45;
    ageMap["Tom"] = 30;
    ageMap["Harry"] = 26;

    cout << "John's age is " << ageMap["John"] << endl;

    string name {"Tomson"};
    if (ageMap.find(name) != ageMap.end()){
        cout << name << "'s age is " << ageMap[name] << endl;
    } else {
        cout << "No record found for " << name << endl;
    }
    
    for (const auto& pair: ageMap){
        cout << pair.first << " : " << pair.second << endl;
    }

    ageMap.erase("Tom");

    return 0;
}