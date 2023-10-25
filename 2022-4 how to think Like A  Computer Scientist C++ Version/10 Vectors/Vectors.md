A vector is a set of values where each value is identified by a number (**called an index**).
`apvector<int> count(4, 0)`
![[vectors.png]]
A **constructor** is a special function that creates new objects and initializes their instance variables. In this case, the constructor takes a single argument, which is the size of the new vector.

#### Copying vectors
`apvector copy = count;`

#### for loops
```c++
for (INITIALIZER; CONDITION; INCREMENTOR) { 
BODY 
}
```
This statement is exactly equivalent to
```c++
INITIALIZER; 
while (CONDITION) {
	BODY 
	INCREMENTOR 
}

```
#### Counting
A good approach to problems like this is to think of simple functions that are **easy to write**, and that might turn out to be useful. Then you can combine them into a solution. This approach is sometimes called **bottom-up design**. Of course, it is not easy to know ahead of time which functions are likely to be useful, but as you gain experience you will have a better idea.

A good approach is to look for **subproblems that fit a pattern** you have seen before.

#### Random seeds
One of the properties of **pseudorandom number generators** is that if they **start from the same place they will generate the same sequence of values**. The **starting place** is called **a seed**; by default, C++ uses the same seed every time you run the program.