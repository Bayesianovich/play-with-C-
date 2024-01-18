// main.cpp
#include "Factory.h"
#include <memory>

int main() {
    Factory factory;
    
    // 创建产品A
    std::unique_ptr<Product> productA(factory.CreateProduct("A"));
    if (productA) {
        productA->Use();
    }
    
    // 创建产品B
    std::unique_ptr<Product> productB(factory.CreateProduct("B"));
    if (productB) {
        productB->Use();
    }
    
    return 0;
}

这段代码是一个简单的C++程序，主要展示了工厂模式的使用。
工厂模式是一种创建对象的最佳方式，它提供了一种创建对象的接口，让子类决定实例化哪一个类。

下面是这段代码的详细解释：

- `#include "Factory.h"` 和 `#include <memory>` 是预处理指令，用于包含其他头文件。
`Factory.h` 是 `main.cpp` 文件需要使用的工厂类，`<memory>` 是C++标准库中的内存管理头文件，
用于智能指针的使用。

- `int main()` 是程序的入口点。

- `Factory factory;` 创建了一个 `Factory` 类的实例 `factory`。

- `std::unique_ptr<Product> productA(factory.CreateProduct("A"));`
 使用工厂类 `factory` 创建了一个 `Product` 类型的唯一指针 `productA`。`CreateProduct("A")` 是工厂类的一个方法，根据传入的参数返回相应类型的产品。

- `if (productA)` 判断 `productA` 是否为空。如果不为空，
则执行 `productA->Use();`，调用 `Product` 类的 `Use` 方法。

- `std::unique_ptr<Product> productB(factory.CreateProduct("B"));` 
和上面的代码类似，创建了一个 `Product` 类型的唯一指针 `productB`，并调用其 `Use` 方法。

- `return 0;` 表示程序正常结束。