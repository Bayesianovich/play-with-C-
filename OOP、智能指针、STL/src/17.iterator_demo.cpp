/*
* 迭代器示例
* 迭代器可以将任意的容器抽象成一个序列，可以使用迭代器遍历容器中的元素
* 迭代器设计的目的是为了解决容器与算法之间的耦合问题，与指针类似，可以通过迭代器访问容器中的元素

* 迭代器的声明方式为：容器类型::iterator，比如：

std::vector<int>::iterator it;
std::list<int>::iterator it;
std::map<int, int>::iterator it;
std::set<int>::iterator it;

*/

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>

void printVector(std::vector<int> &v)
{
    std::cout <<"[";
    for (const auto &it : v)
    {
        std::cout << it << " ";
    }
    std::cout << "]" << std::endl;
}

void test1(){
    std::cout << "test1===========" << std::endl;
    std::vector<int> v1 {1, 2, 3, 4, 5};
    std::vector<int>::iterator it = v1.begin();
    std::cout << *it << std::endl;

    it++;
    std::cout << *it << std::endl;

    it = it + 2;
    std::cout << *it << std::endl;

    it = it - 2;
    std::cout << *it << std::endl;

    it = v1.end() - 1;
    std::cout << *it << std::endl;
}

void test2(){
    std::cout << "test2===========" << std::endl;
    std::vector<int> v1 {1, 2, 3, 4, 5};
    auto it = v1.begin();

    while (it != v1.end())
    {
        std::cout << *it << " ";
        it++;
    }


    it = v1.begin();
    while (it != v1.end())
    {
        if (*it % 2 == 0)
        {
            it = v1.erase(it);
        }
        else
        {
            it++;
        }
    }
    printVector(v1);
}

void test3(){
    std::cout << "test3===========" << std::endl;
    std::list<int> l1 {1, 2, 3, 4, 5};
    auto it = l1.rbegin();
    while (it != l1.rend()) // 修改为 rend()
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl; // 添加换行以清晰输出

    std::list<std::string> l2 {"hello", "world", "cpp"};
    auto it2 = l2.rbegin();
    std::cout << *it2 << std::endl;
    it2++;
    std::cout << *it2 << std::endl;

    std::map<std::string, std::string> m1 {
        {"C", "C language"},
        {"Rust", "Rust language"},
        {"Python", "Python language"},
        {"C++", "C++ language"},
    };
    auto it3 = m1.begin();
    while (it3 != m1.end())
    {
        std::cout << it3->first << " " << it3->second << std::endl;
        it3++;
    }
    
}

int main()
{
    test1();
    test2();
    test3();
    return 0;
}