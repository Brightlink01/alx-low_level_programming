#include"main.h"
#include <stddef.h>

/**
 *_strchr - set array based on char
 *@s: is array that has the strings
 *@c: the setting value
 *Return: s
 */

char *_strchr(char *s,char c)
{
for (;; ++s)
{
if (*s == c)
return (s);
if (*s == '\0')
return (NULL);
}
}
