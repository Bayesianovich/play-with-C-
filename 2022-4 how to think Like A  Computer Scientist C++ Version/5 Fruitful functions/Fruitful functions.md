When you call a void function, it is typically on a line by itself, with no assignment:
`
``````c++
double area(double radius){
return acos(-1.0 * radius * radius)
}
``````
By now you are probably **sick of seeing compiler errors**, but as you gain more experience, you will realize that the only thing worse than getting a compiler error is not **getting a compiler error when your program is wrong**.

As you gain more experience programming, you might find yourself writing and debugging more than one line at a time. Nevertheless, this **incremental development** process can save you a lot of debugging time.

The key aspects of the process are：
- Start with a working program and make small, incremental changes. At any point, if there is an error, you will know exactly where it is。
- Use temporary variables to hold intermediate values so you can output and check them.
- Once the program is working, you might want to **remove some of the scaffolding or consolidate multiple statements into compound expressions**, but only if it does not make the program difficult to read。
- Overloading
**Having more than one function with the same name**, which is called overloading, is legal in C++ as long as each version takes different parameters.

Main is not really supposed to be a void function. It’s supposed to return an integer: 
```c++
int main () { 
return 0; 
}

```
**The usual return value from main is 0**, which indicates that the program succeeded at whatever it was supposed to to. If something goes wrong, **it is common to return -1, or some other value that indicates what kind of error occurred.**


**scaffolding:** Code that is used during program development but is not part of the final version.

**overloading:** Having more than one function with the same name but different parameters. When you call an overloaded function, C++ knows which version to use by looking at the arguments you provide.

