#include"main.h"
/**
*_strcat - string concatinating function
*@dest: the char pointer type to take concatenation
*@src: char type pointer to be concatnated
*Return: dest pointer
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
 
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
