#include"main.h"
#include<stdlib.h>

/**
 *malloc_checked - function that allocates the memory
 *@b: amount of memory to be allocated in size
 *Return: point of void
 *
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
  
ptr = malloc(b + 1);
if (ptr == NULL)
{
return (98);
}
return (ptr);
}
