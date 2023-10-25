### Structures
- Compound values
Depending on what we are doing, we may want to treat a compound type as a single thing (or object), or we may want to access its parts (or instance variables).**This ambiguity is useful.**

- C++ provides two mechanisms for doing that: *structures and classes*.

- Point objects
```c++
struct Point { 
double x, y; 
};
```
**struct** definitions appear outside of any function definition, **usually at the beginning of the program (after the include statements).**

The purpose of **dot notation** is to identify which variable you are referring to **unambiguously**.

### Call by value
When you pass a structure as an argument, remember that the argument and the parameter are not the same variable. Instead, there are two variables (one in the caller and one in the callee) that have the same value, at least initially. 

This kind of parameter-passing is called “**pass by value**” because it is **the value of the structure (or other type) that gets passed to the function**.

### Call by reference
An alternative parameter-passing mechanism that is available in C++ is called “pass by reference.” This mechanism makes it possible to **pass a structure to a procedure and modify it.**
We do that by **adding an ampersand (&) to the parameter declaration**:

For now a good rule of thumb is **that reference arguments have to be variables.**


**reference**:  A value that indicates or refers to a variable or structure. In a state diagram, a reference appears as an arrow.

**pass by value**: A method of parameter-passing in which the value provided as an argument is copied into the corresponding parameter, but the parameter and the argument occupy distinct locations.
**值传递：**

形参是实参的拷贝，改变形参的值并不会影响外部实参的值。从被调用函数的角度来说，值传递是单向的（实参->形参），参数的值只能传入，不能传出。当函数内部需要修改参数，并且不希望这个改变影响调用者时，采用值传递。

**pass by reference**: A method of parameter-passing in which the parameter is a reference to the argument variable. Changes to the parameter also affect the argument variable.

形参相当于是实参的“别名”，对形参的操作其实就是对实参的操作，在引用传递过程中，被调函数的形式参数虽然也作为局部变量在栈中开辟了内存空间，但是这时存放的是由主调函数放进来的实参变量的地址。被调函数对形参的任何操作都被处理成间接寻址，即通过栈中存放的地址访问主调函数中的实参变量。正因为如此，被调函数对形参做的任何操作都影响了主调函数中的实参变量。