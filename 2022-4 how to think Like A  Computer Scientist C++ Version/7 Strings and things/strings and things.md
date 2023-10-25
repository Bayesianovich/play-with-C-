The string type we are going to use is called apstring, which is a type created specifically for the Computer Science AP Exam.

**Strings** are called “strings” because they are made up of a **sequence, or string, of characters**.

To find the length of a **string (number of characters)**, we can use the length function. The syntax for calling this function is a little different from what we’ve seen before:
```c++
int length;
length = fruit.length();
```

To describe this function call, we would say that we are invoking the length function on the string named fruit.

The syntax for function invocation is called “**dot notation**,” because **the dot (period) separates the name of the object, fruit, from the name of the function, length.**

#### Traversal
A common thing to do with a string is start at the beginning, select each character in turn, do something to it, and continue until the end. This pattern of processing is called a **traversal.**

#### The find function
```c++
apstring fruit = "banana";
int index = fruit.find(’a’);
```
#### Our own version of find  自定义函数
One way to generalize the find function is to write a version that takes an additional parameter—the index where we should start looking.
```c++
int find (apstring s, char c, int i)
{
while (i<s.length()){
	if (s[i] == c) return i;
	i = i +1;
}
return -1;
}
```
#### Looping and counting
```c++
apstring fruit = "banana";
int length = fruit.length();
int count = 0;


int index = 0;
while (index < length) {
if (fruit[index] == ’a’) {
count = count + 1;
}
index = index + 1; }
cout << count << endl;
```
#### Increment and decrement operators

#### String concatenation
The + operator does not work on native C strings.

Be careful to use string concatenation only with apstrings and not with native C strings.

#### Character classification
It is often useful to examine a character and test whether it is upper or lower case, or whether it is a character or a digit. C++ provides a library of functions that perform this kind of character classification. In order to use these functions, you have to include **the header file ctype.h.**
