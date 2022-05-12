********************************* Variadic Functions *********************************
1. ISO C defines a syntax for declaring a function to take a variable number or type of arguments. (Such functions are referred to as varargs functions or variadic functions.) However, the language itself provides no mechanism for such functions to access their non-required arguments; instead, you use the variable arguments macros defined in stdarg.h.
2.Ordinary C functions take a fixed number of arguments. When you define a function, you specify the data type for each argument. Every call to the function should supply the expected number of arguments, with types that can be converted to the specified ones. Thus, if the function ‘foo’ is declared with int foo (int, char *); then you must call it with two arguments, a number (any kind will do) and a string pointer. But some functions perform operations that can meaningfully accept an unlimited number of arguments. In some cases a function can handle any number of values by operating on all of them as a block. For example, consider a function that allocates a one-dimensional array with malloc to hold a specified set of values. This operation makes sense for any number of values, as long as the length of the array corresponds to that number. Without facilities for variable arguments, you would have to define a separate function for each possible array size.
3.stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments

************************************************************-----THE PRROJECTS-----*****************************************************************
0. Beauty is variable, ugliness is constant
1. To be is to be the value of a variable
2. One woman's constant is another woman's variable
3. To be is a to be the value of a variable

********************************************* THESE PROJECT IS DONE TO FULL FIL THE ALX SE COURSE ON C low level programming************************
