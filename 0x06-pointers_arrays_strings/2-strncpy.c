#include"main.h"

/**
 *_strncpy -the functionction copy the string
 *@dest: the destination pointer hold copy
 *@src: the pointerholds thestring to be copied
 *@n: the n neber strings has to be copied
 *Return: Returns dest;
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
