#include"main.h"
#include<stdlib.h"

/**
* _strdup - copy the strings and returns pointer
*@str: the string character
*Return: String of str
*
*/

char *_strdup(char *str)
{

int len, cnt;
char *c_str;

len = strlen(str);
c_str = malloc((len + 1) * sizeof(char));
cnt = 0;

if (c_str == NULL)
{
return (NULL);
}

while (cnt <= len)
{
c_str[i] = str[i];
cnt++;
}

c_str[i] = '\0';

return (c_str);
}
