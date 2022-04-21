#include"main.h"
#include<ctype.h>

/**
 *string_toupper - changes the lower case to upper case
 *@str: is pointer that points to the strings;
 *Return: char type str
 *
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (!isupper(str[i]))
str[i] = toupper(str[i]);
}
return (str);
}
