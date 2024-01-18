//数组类
#include <iostream>
using namespace std;

template <typename T>
class Array{
    private:
        T *data;
        int size;
    
    public:
        Array(int size){
            data = new T[size];
            this->size = size;
        }

        ~Array(){
            delete[] data;
        }

    void set(int index, T value){
        if (index >= 0 && index < size){
            data[index] = value;
        } else {
            cout << "index out of range" << endl;
        }
    }

    T get(int index){
        if (index >= 0 && index < size){
            return data[index];
        } else {
            cout << "index out of range" << endl;
            return 0;
        }
    }

    void print(){
        for (int i = 0; i < size; i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    Array<int> intArray(10);
    intArray.set(3,50);
    intArray.print();

    Array<double> doubleArray(10);
    doubleArray.set(3,3.14);
    doubleArray.print();

    Array<string> strArray(10);
    strArray.set(3,"hello");
    strArray.print();

    return 0;

    
}