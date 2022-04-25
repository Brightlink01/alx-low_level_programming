#include"main.h"

/**
 *_strchr - set array based on char
 *@s: is array that has the strings
 *@c: the setting value
 *Return: s
 */

char *_strchr(char *s, int c)
{

int ch;
c = c;
for (;; ++s)
{
if (*s == c)
return ((char *)s);
if (*s == '\0')
return (NULL);
}
