#include"main.h"

/**
 *cap_string - it capitalizes all words of a string
 *@str: pointer typed char and has string value
 *Return: char str
 */
char *cap_string(char *str)
{
char sy[] = ",;.\t!?(){  \"}";
int i, j;
int count;
for (i = 0; str[i] != '\0'; i++)
{
if (str[0] > 'a' && str[0] < 'z')
count = 1;
{
for (j = 0; sy[j] != '\0'; j++)
{
if (sy[j] == str[i])
count = 1;
}
if (count)
{
if (str[i] > 'a' && str[i] < 'z')
{
str[i] -= 32;
count = 0;
}
}
else if (str[i] > 64 && str[i] < 91)
count = 0;
else if (str[i] > 47 && str[i] < 58)
count = 0;
}
}
return (str);
}
