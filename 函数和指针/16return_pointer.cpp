#include <iostream>
using namespace std;

//返回动态分配的内存
int *create_array(size_t size, int initial_value = 0)
{
    int *new_storage {nullptr};
    new_storage = new int[size];
    for(size_t i {0}; i < size; ++i)
        *(new_storage + i) = initial_value;
    return new_storage;
}

// 显示数组
void display(int *array,size_t size)
{
    for (size_t i {0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}

int main(){
    size_t size{};
    int value{};
    int *my_array{nullptr};

    cout << "How many integers would you like to allocate?";
    cin >> size;
    cout << "What value would you like them initialized to?";
    cin >> value;

    my_array = create_array(size, value);
    cout << "-----------------" << endl;
    display(my_array, size);
    delete [] my_array;
    return 0;
}