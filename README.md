The c programming introduction hello world
0x06. C - More pointers, arrays and strings
-Every time you declare a variable, the computer will reserve memory for this variable. The memory reserved will then store the value of the variable.

**** Depending on the type of the variable, the computer will reserve more or less memory. The size of each type is generally defined in bytes (1 byte = 8 bits, each bit being 0 or 1) ****

*** A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location

*** Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type

Strings are actually one-dimensional array of characters terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null.

***But, you can still use the name of the array in your code, and its value will be… the address of the first element of the array. Wait… WAT?