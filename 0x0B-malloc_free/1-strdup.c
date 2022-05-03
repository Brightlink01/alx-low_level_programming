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

if (str != NULL)
len = strlen(str);
else
return (NULL);

c_str = malloc((len + 1) * sizeof(char));
cnt = 0;

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
