It’s not easy to define object-oriented programming, but we have already seen some features of it:
1. Programs are made up of a collection of **structure definitions** and **function definitions**, where most of the functions operate on specific kinds of structures (or objecs).
2. Each structure definition corresponds to**some object or concept in the real world,** and the functions that **operate** on that structure correspond to the ways **real-world objects interact**.
#### Member functions
1. When we call the function, we **invoke it on an object**, rather than just call it. People sometimes describe this process as “**performing an operation on an object**,” or “**sending a message to an object.**”
2. The function is declared inside the struct definition, in order to make the relationship between the structure and the function explicit.
- 成员函数是面向对象的概念，所谓的成员函数，是指一个函数作为类的成员，公有成员、私有成员或者保护成员。
- 普通函数一般有两种传递方式，按类型传递和按值传递，也就是传指针和传返回值两种情况。成员函数一般是按类型传递，也即是传指针地址
- 普通函数可以随便调用，并且无法继承和封装，成员函数根据类的不同，可以进行继承，根据公有私有的不同，调用方式也不同
- 成员函数是类定义的一部分，通过特定的对象来调用。成员函数可以隐式访问调用对象的成员，而无须使用成员操作符。友元函数不是类的组成部分，因此被称为直接函数调用。友元函数不能隐式访问类成员，而必须将成员操作符用于作为参数传递的对象。