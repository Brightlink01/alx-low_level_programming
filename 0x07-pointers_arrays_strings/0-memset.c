#include"main.h"

/**
 *_memset - fill the n bytes address with value
 *@s: the pointer holds the value
 *@b: charecter type to be set to memory addres
 *@n: size of memory address
 *Return: s the string
 */

char *_memset(char *s, char b, unsigned int n)
{

int i = 0;
for (i = 0; i <= n; i++)
{
s[i] = b;
}
return (s);
}
