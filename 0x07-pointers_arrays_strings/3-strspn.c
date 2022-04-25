#include"main.h"
/**
 *_strspn - calculate the length of the arry
 *@s: source array passed
 *@accept: accept the span the pointer
 *Return: the s-s1
 */

unsigned int _strspn(char *s, char * accept)
{
char *s1 = s;
char *c;

while (*s)
{
for (c = accept; *c; c++)
{
if (*s == *c)
break;
}
if (*c == '\0')
break;
s++;
}
return (s - s1);
}
