I like the way computer scientists think because they combine some of the best features of **Mathematics, Engineering, and Natural Science**. Like mathematicians, computer scientists use *formal languages* to denote ideas  (specifically computations). Like engineers, they *design things*, *assembling components into systems and evaluating tradeoffs among alternatives.* Like scientists, they *observe* the behavior of complex systems ，*form* hypotheses, and *test* predictions.

There are two ways to translate a program; *interpreting* or *compiling.*

In effect, interpreting **translates the program line-by-line,** alternately reading lines and carrying out commands.![[interpreting.png]]
A compiler is a program that reads a high-level program and translates it **all at once**, before executing any of the commands。
.Often you compile the program as a separate step, and *then* execute the compiled code later. In this case, the *high-level program* is called *the source code*, and the *translated program* is called the **object code or the executable**

![[compiling.png]]
#### What is a program?
A program is **a sequence of instructions** that specifies how to perform a computation.

there are a few *basic functions* that appear in just about every language:
- input
- output
- math
- testing
- repetition
Believe it or not, that’s pretty much all there is to it.
one way to **describe programming** is the process of breaking a large, complex task up into smaller and smaller subtasks until eventually the subtasks are simple enough to be performed with one of these simple functions.（分而治之）
#### What is debugging?
programming errors are called bugs and **the process of tracking them down and correcting** them is called debugging.

##### Compile-time errors
- **Syntax** refers to the *structure* of your program and the *rules* about that structure.

##### Run-time errors
The second type of error is a run-time error, so-called because the error does not appear until you run the program.

##### Logic errors and semantics
The third type of error is the **logical or semantic** error.

##### Experimental debugging
As Sherlock Holmes pointed out, “When you have eliminated the impossible, whatever remains, however improbable, must be the truth.” (from A. Conan Doyle’s The Sign of Four).

#### Formal and natural languages
Programming languages are formal languages that have been designed to express computations.

**ambiguity:** Natural languages are full of a*mbiguity*,fformal languages are designed to be nearly or completely *unambiguous*。

**redundancy:** In order to make up for ambiguity and reduce misunderstandings, natural languages **employ lots of redundancy**. As a result, they are often verbose. Formal languages are **less redundant and more concise.**

**literalness:** Natural languages are full of idiom and metaphor. If I say, “The other shoe fell,” there is probably no shoe and nothing falling. Formal languages mean exactly what they say


```c++
#include  <iostream.h>
// main: generate some simple output 
void main () 
{ cout << "Hello, world." << endl; 
 return 0 
}

```
**main** is a special name that indicates the place in the program where execution begins. When the program runs, it starts by executing the first statement in main and it continues, in order, until it gets to the last statement, and then it quits.

- **cout** is a special object provided by the system to allow you to send output to the screen. The- **symbol <<** is an operator that you apply to cout and a string, and that causes the string to be displayed.

- **endl** is a special symbol that represents the end of a line. When you send an endl to cout, it causes the **cursor to move to the next line of the display**. The next time you output something, the new text appears on the next line.
- Like all statements, the output statement ends with a **semi-colon (;)**.