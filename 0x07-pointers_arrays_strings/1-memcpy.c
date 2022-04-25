#include"main.h"

/**
 *_memcpy - function that copy memory address
 *@dest: the destination are that hold memory address copy
 *@src: the source arymemory address
 *@n: the size of array
 *Return: Return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}

return (dest);

}
