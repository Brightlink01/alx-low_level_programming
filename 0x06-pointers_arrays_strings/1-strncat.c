#include"main.h"

/**
 *_strncat - string concatinating function
 *@dest: the pointer used to store string
 *@src: the pointer used to pash the string to concatinate
 *@n: n concatination of string be done
 *Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (i <= n)
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
