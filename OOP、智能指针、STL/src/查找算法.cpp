#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    std::vector<int> v {1, 2, 3, 4, 5};
    auto it = std::find(v.begin(), v.end(), 3);

    if (it != v.end())
    {
        std::cout << "found" << std::endl;
    }
    else
    {
        std::cout << "not found" << std::endl;
    }

    return 0;
}