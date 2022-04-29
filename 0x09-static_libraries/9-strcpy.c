#include"main.h"

/**
 *_strcpy - copy the string
 *@dest: pointer type destionation
 *@src: pointer type variable src
 *Return: dest
 *
 */

char *_strcpy(char *dest, char *src)
{
int i;
i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';
return (dest);

}
