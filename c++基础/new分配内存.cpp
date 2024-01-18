# include <iostream>

class MyClass{
    public:
        MyClass(){
            std::cout << "Constructor is called." << std::endl;
        }
        ~MyClass(){
            std::cout << "Destructor is called." << std::endl;
        }
};

int main(){
    MyClass *p = new MyClass();
    delete p;
}