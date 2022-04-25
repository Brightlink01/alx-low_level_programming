#include"main.h"

/**
 *strstr - find the first sub string 
 *@haystack: locates sub strings
 *@needle: occurance of string 
 */
char *strstr(char *haystack, char *needle)

{
register char *a, *b;
b = needle;
if (*b == 0)
{

return haystack;

}

for ( ; *haystack != 0; haystack += 1) {
if (*haystack != *b)
{

continue;

}

a = haystack;

while (1)
{

if (*b == 0)
{

return haystack;

}

if (*a++ != *b++)
{

break;

}
}

b = needle;

}
return NULL;
}
