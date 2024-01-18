#include <iostream>
using namespace std;

void print_arr(const int arr[],size_t size);
void change_arr(int arr[],size_t size);

int main()
{
    int arr[] = {1,2,3,4,5};
    print_arr(arr,5);
    change_arr(arr,5);
    print_arr(arr,5);
    return 0;
}

// size_t是一种无符号整数类型，
// 通常用于表示大小（如数组的大小）或者是计数。
void print_arr(const int arr[],size_t size)
{
    for(size_t i = 0;i < size;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void change_arr(int arr[],size_t size)
{
    for(size_t i = 0;i < size;i++)
    {
        arr[i] = 60;
    }
}