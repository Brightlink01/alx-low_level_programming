#include"main.h"
#include<stdlib.h>
#include<string.h>

/**
* _strdup - copy the strings are and returns pointer
*@str: the string character
*Return: String of str
*
*/

char *_strdup(char *str)
{

int len, cnt;
char *c_str;

len = strlen(str);

if (str != NULL)
c_str = malloc((len + 1) * sizeof(char));
cnt = 0;

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
