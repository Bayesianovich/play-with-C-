#include <iostream>
#include <set>

int main()
{
    //根据元素的值自动排序，并自动去除重复元素
    std::set<int> s {3,5,7,8};
    s.insert(9);
    s.insert(2);
    s.insert(4);
    s.erase(8);
    s.insert(16);
    for (auto &i : s)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}