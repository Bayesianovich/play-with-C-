#include <iostream>
#include <list>
using namespace std;

list<int> l {3,5,7,8};

int main()
{
    l.push_back(9);
    l.push_front(2);
    l.insert(++l.begin(), 4);
    //--l.end() 表示指向列表 l 中最后一个元素的迭代器的前一个位置
    l.erase(--l.end());
    auto it = next(l.begin(), 4);
    l.insert(it, 16);
    for (auto &i : l)
        cout << i << " ";
    cout << endl;
    return 0;
}


