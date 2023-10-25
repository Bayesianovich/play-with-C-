A value is one of the **fundamental things**—like a letter or a number—that a program manipulates.

One of the most powerful features of a programming language is the ability to manipulate variables. **A variable is a named location that stores a value**.

The following statement *creates a new variable named fred that has type char.*
`char fred; `
This kind of statement is called **a declaration**.


Now that we have created some variables, we would like to store values in them. We do that with **an assignment statement**.
`firstLetter = 'a';`

a *state diagram*
![[state diagram.png]]
one of the rules in C++ is that **a variable has to have the same type as the value you assign it.**
``````c++

#include  <iostream.h>

void main () 
{ int hour,minute;
  char colon;

  hour = 11;
  minute = 59;
  colon = ":";

 cout << "The current time is ";
 cout << hour;
 cout << colon;
 cout << minute;
 cout << endl
}
``````
There are certain words that are **reserved in C++** because*they are used by the compiler to parse the structure of your program*, and if you use them as variable names, it will get confused. These words, called keywords, include int, char, void, endl and many more.

``````c++
int hour, minute;
hour = 11; minute = 59;
cout << "Number of minutes since midnight: ";
cout << hour*60 + minute << endl;
cout << "Fraction of the hour that has passed: ";
cout << minute/60 << endl;
``````

would generate the following output: 
Number of minutes since midnight: 719 
Fraction of the hour that has passed: 0

The reason for the discrepancy is that C++ is performing integer division，always rounds down