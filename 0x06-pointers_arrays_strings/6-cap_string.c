#include"main.h"
#include <ctype.h>

/**
 *cap_string - it capitalizes all words of a string
 *@str: pointer typed char and has string value
 *Return: char str
 */
char *cap_string(char *str)
{
char sy[] = ",;.!?(){  \"}";
int i, j, x;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; sy[j] != '\0'; j++)
{
if str[i] == sy[j]
{
i++;
str[i] = toupper(str[i]);
break;
}
}
}
}
