#include <iostream>

//Box是一个模板类，T是一个类型参数，可以是任何类型。
template <typename T>
class Box{
    private:
        T item;
    
    public:
        void setItem(T newItem){
            item = newItem;
        }

        T getItem(){
            return item;
        }

};

int main(){
    Box<int> intBox;
    intBox.setItem(123);
    std::cout << intBox.getItem() << std::endl;

    Box<std::string> strBox;
    strBox.setItem("hello");
    std::cout << strBox.getItem() << std::endl;

    return 0;
}