#include"main.h"
#include<stdlib.h>
#include<string.h>

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
if (len == NULL)
return (NULL);
if (c_str == NULL)
{
return (NULL);
}

while (cnt <= len)
{
c_str[cnt] = str[cnt];
cnt++;
}

c_str[cnt] = '\0';

return (c_str);
}
