#include"main.h"
#include<stdlib.h>
#include<string.h>

/**
 *str_concat - conacatinates strings
 *@s1: s1 string to be concatenaned
 *@s2: s2 string to bee concatenated
 *Return: char type pointer
 *
 */

char *str_concat(char *s1, char *s2)
{

char *con_str;
unsigned int len, len1, len2, i, j;

len1 = strlen(s1);
len2 = strlen(s2);
len = len1 + len2;
j = 0;

con_str = malloc((len + 1) * sizeof(char));
if (con_str == NULL)
{
return (NULL);
}
for (i = 0; i <= len1; i++)
{
con_str[i] = s1[i];
}
while (j <= len2)
{
con_str[i] = s2[j];
i++;
j++;
}
con_str[i] = '\0';
return (con_str);
}
