equality is commutative, and assignment is not. 判等语句是可以交换的，而赋值语句则不可以。
The statements inside the loop are called the **body of the loop**

One of the things loops are good for is generating **tabular data.**

##### Encapsulation and generalization
Encapsulation usually means taking **a piece of code and wrapping it up in a function**, allowing you to take advantage of all the things functions are good for.

“all the things functions are good for。”
- By giving a name to a sequence of statements, you make your program easier to read and debug.
- Dividing a long program into functions allows you to separate parts of the program, debug them in isolation, and then compose them into a whole.
- • Functions facilitate both recursion and iteration.
- Well-designed functions are often useful for many programs. Once you write and debug one, you can reuse it.
- 
相同点：

递归和迭代都是循环的一种。

1. 程序结构不同
递归是**重复调用函数**自身实现循环。迭代是**函数内某段代码实现循环**。

**encapsulate：**
To divide a large complex program into components (like funtions) and isolate the components from each other (for example, by using local variables).

**generalize:**
To replace something unnecessarily specific (like a constant value) with something appropriately general (like a variable or parameter). Generalization makes code more versatile, more likely to be reused, and sometimes even easier to write.

**development plan:** 
A process for developing a program. In this chapter, I demonstrated a style of development based on developing code to do simple, specific things, and then encapsulating and generalizing.