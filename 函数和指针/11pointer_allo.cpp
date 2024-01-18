#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Explanation: Declaring an integer pointer and initializing it to nullptr
    int *int_ptr {nullptr};

    cout << "Value of int_ptr is: " << int_ptr << endl;
    int_ptr = new int; // Allocate an integer on the heap and store its address in int_ptr
    cout << "Value of int_ptr is: " << int_ptr << endl;
    cout << *int_ptr << endl;

    delete int_ptr; // Return the memory to the heap

    // 使用 size_t 类型来存储变量 size，因为 size_t 类型是用于存储大小的最佳类型，通常用于数组索引和循环计数。
    size_t size {0};
    double *temp_ptr {nullptr};
    cout << "How many temps? ";
    cin >> size;
    temp_ptr = new double[size]; // Allocate an array of doubles on the heap of length size
    cout << temp_ptr << endl;
    delete [] temp_ptr; // Return the array to the heap.  Note the [] after delete

    return 0;
    
}