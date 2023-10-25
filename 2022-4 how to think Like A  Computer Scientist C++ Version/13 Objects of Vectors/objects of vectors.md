Actually, C++ provides a feature called and **enumerated type** that makes it possible to 
*(1)* include a mapping as part of the program
*(2)* define the set of values that make up the mapping. For example, here is the definition of the enumerated types Suit and Rank:
```c+++
enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };
enum Rank { ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
```
**By default, the first value in the enumerated type maps to 0**, the second to 1, and so on. Within the Suit type, the value CLUBS is represented by the integer 0, DIAMONDS is represented by 1, etc. 

The definition of Rank overrides the default mapping and specifies that ACE should be represented by the integer 1. The other values follow in the usual way.


### switch statement
 A *switch statement* is an alternative to a *chained conditional* that is syntactically prettier and often more efficient.