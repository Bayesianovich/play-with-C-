### Private data and classes
**functional encapsulation:** I have used the word “encapsulation” in this book to refer to the process of wrapping up a sequence of instructions in a function, in order to separate the function’s interface (how to use it) from its implementation (how it does what it does).

**Data encapsulation** is based on the idea that each structure definition should provide **a set of functions that apply to the structure, and prevent unrestricted access to the internal representation.**

One use of data encapsulation is to **hide implementation details from users** or **programmers that don’t need to know them**

### What is a class?
In most object-oriented programming languages,**a class is a user-defined type** that includes a set of functions. As we have seen, structures in C++ meet the general definition of a class.

But there is another feature in C++ that also meets this definition; confusingly, it is called a class. **In C++, a class is just a structure whose instance variables are private by default.**

In fact, anything that can be written **as a struct** can also be written **as a class**, **just by adding or removing labels**. There is no real reason to choose one over the other, except that as a stylistic choice, most C++ programmers use class