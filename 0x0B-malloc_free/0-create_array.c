#include"main.h"
#include<stdlib.h>
/**
 * create_array - function that creates array
 * @size: the size of array to be created
 * @c: the charecter to be saved in array;
 * Return: char typed pointer
 *
 */

char *create_array(unsigned int size, char c)
{
char *c_ar;
unsigned int i;
i = 0;
if (size == 0)
return (NULL);
c_ar = malloc(size * sizeof(char));
while (i < size)
{
c_ar[i] = c;
i++;
}

c_ar[i] = '\0';
return (c_ar);
}
