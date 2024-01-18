// Product.h
#ifndef PRODUCT_H
#define PRODUCT_H

class Product {
public:
    virtual ~Product() {}
    virtual void Use() = 0; // 纯虚函数，子类必须实现
};

#endif // PRODUCT_H



这段代码定义了一个名为 `Product` 的抽象类（abstract class）。
在C++中，抽象类是一种特殊的类，它不能被实例化，只能被其他类继承。
抽象类通常包含一个或多个纯虚函数（pure virtual function），
这些函数在抽象类中没有实现，而是由派生类来实现。

下面是这段代码的详细解释：

- `#ifndef`, `#define`, `#endif` 是预处理指令，用于防止头文件被重复包含。
`#ifndef` 检查 `PRODUCT_H` 是否已经被定义，
如果没有，则执行 `#define` 和后面的代码；`#endif` 标记 `#ifndef` 的结束。

- `class Product` 定义了一个名为 `Product` 的类。

- `virtual ~Product() {}` 定义了 `Product` 类的析构函数。
`virtual` 关键字表示这是一个虚函数，它可以在派生类中被重写。空大括号 `{}` 表示这是一个空的析构函数，即它不执行任何操作。

- `virtual void Use() = 0;` 定义了一个纯虚函数 `Use`。
`= 0` 表示这是一个纯虚函数，它在 `Product` 类中没有实现，必须在派生类中实现。