//元素按键自动排序。
#include <iostream>
#include <map>


int main()
{
    //根据元素的值自动排序，并自动去除重复元素
    std::map<int, std::string> m {{3, "three"}, {5, "five"}, {7, "seven"}, {8, "eight"}};
    m.insert({9, "nine"});
    m.insert({2, "two"});
    m.insert({4, "four"});
    m.erase(8);
    m.insert({16, "sixteen"});
    for (auto &i : m)
        std::cout << i.first << " " << i.second << std::endl;
    return 0;
}