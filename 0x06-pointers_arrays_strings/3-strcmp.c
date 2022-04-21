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
int i;
for (i = 0; s1[i] !='\0' || s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (*s1 - *s2);
}
return(0);
}
