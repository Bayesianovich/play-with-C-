// Factory.h
#ifndef FACTORY_H
#define FACTORY_H

#include "Product.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"
#include <string>

class Factory {
public:
    Product* CreateProduct(const std::string& type) {
        if (type == "A") {
            return new ConcreteProductA();
        } else if (type == "B") {
            return new ConcreteProductB();
        }
        return nullptr; // 如果给定的类型不匹配，则返回空指针
    }
};

#endif // FACTORY_H

这段代码是C++中工厂模式的一个例子。工厂模式是一种创建型设计模式，它提供了一种创建对象的最佳方式。

首先，代码包含了一些头文件，包括"Product.h"，"ConcreteProductA.h"和"ConcreteProductB.h"。这些头文件分别定义了Product基类和两个派生类ConcreteProductA和ConcreteProductB。

然后，定义了一个Factory类，它有一个公共的成员函数CreateProduct。这个函数接受一个字符串参数type，根据type的值创建并返回一个Product类型的对象。如果type是"A"，则创建一个ConcreteProductA对象；如果type是"B"，则创建一个ConcreteProductB对象。如果type既不是"A"也不是"B"，则返回空指针。

这个Factory类就是一个简单的工厂，它根据输入的类型创建并返回相应的产品对象。这样，客户端代码就可以依赖于抽象接口Product，而不是具体的产品类ConcreteProductA或ConcreteProductB，这使得客户端代码更加灵活和可扩展。