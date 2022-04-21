#include"main.h"
/**
 *_strcmp - function compare the strings
 *@s1: pointer of char type hold string 1
 *@s2: pointer of char type hold string 2 to be compared
 *Return: integral value if 0, for equal other wise neagtive and posative int
 *
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return *s1 - *s2;
}
