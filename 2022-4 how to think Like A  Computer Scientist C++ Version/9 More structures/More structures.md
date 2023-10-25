**pure function:** A function whose result depends only on its parameters, and that has so effects other than returning a value.

**functional programming style:** A style of program design in **which the majority of functions are pure.**


A function is considered a **pure function** if the result depends only on the arguments, and it has no side effects like modifying an argument or outputting something. The only result of calling a pure function is the return value。

Since these are **pure functions**, they do not modify the parameters they receive, so I could just as well have passed them by value

The advantage of **passing by value** is that the calling function and the callee are appropriately **encapsulated**—it is not possible for a change in one to affect the other, except by affecting the return value.

On the other hand,**passing by reference usually is more efficient**, because it avoids copying the argument. Furthermore, there is a nice feature in C++, **called const**, that can make reference parameters just as safe as value parameters.

