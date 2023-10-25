`String empty = ""; double pi = 3.14159;`

In fact, this syntax is quite common. A combined **declaration and assignment** is sometimes called **an initialization**.

The simplest way to *convert a floating-point value to an integer* is to *use a typecast*. Typecasting is so called because it allows you to take a value that belongs to one type and “cast” it into another type (in the sense of molding or reforming, not throwing).

The syntax for typecasting is like the syntax for a function call. `double pi = 3.14159; int x = int (pi);`

Before you can use any of the math functions, you have to include the math **header file**.

**Header files** contain information the compiler needs about functions that are defined outside your program.
`#include<iostream.h>`iostream.h contains information about **input and output (I/O) streams**, including the object named **cout**


Similarly, the math header file contains information about the math functions. You can include it at the beginning of your program along with`#include <math.h>`

##### Definitions and uses
```c++
#include<iostream.h>
void newLine ()
{
	cout << endl;
}
void threeLine () { 
newLine ();
newLine ();
newLine ();
}

void main () {
cout << "First Line." << endl;
threeLine (); 
cout << "Second Line." << endl; 
}
```
The function named main is special because it indicates where the execution of the program begins.

This program contains three function definitions:` newLine, threeLine, and main.`

**Inside the definition of main, there is a statement that uses or calls threeLine**. Similarly, **threeLine calls newLine three times.** Notice that the definition of each function appears above the place where it is used.

This is necessary in C++; **the definition of a function must appear before (above) the first use of the function.** You should try compiling this program with the functions in a different order and see what error messages you get.

##### Programs with multiple functions
Execution always begins at the first statement of main, regardless of where it is in the program (often it is at the bottom). Statements are executed one at a time, in order, until you reach a function call. Function calls are like a detour in the flow of execution. Instead of going to the next statement, you go to the first line of the called function, execute all the statements there, and then come back and pick up again where you left off.


The name of the variable we pass as an **argument（实参）** has nothing to do with the name of the **parameter（形参）**。

The value you provide as an argument must have **the same type as** the parameter of the function you call.

Whenever a function is called, it creates a new **instance** of that function.

##### Functions with multiple parameters
The syntax for declaring and invoking functions with multiple parameters is a common source of errors. First, remember that you have to**declare the type of every parameter**。

It is **unnecessary and illegal to include the type** when you pass them as **arguments**.