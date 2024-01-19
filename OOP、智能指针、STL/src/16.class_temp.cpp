#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class Item
{
private:
    string name;
    T value;

public:
    Item(string name, T value): name{name}, value{value}
    {
    }

    string get_name() const { return name; }
    T get_value() const { return value; }
};

template <typename T1,typename T2>
struct My_Pair
{
    T1 first;
    T2 second;
};

int main(){
    My_Pair<string,int> p1{"Frank",100};
    My_Pair<int,double> p2{124,13.5};

    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;

    return 0;
}