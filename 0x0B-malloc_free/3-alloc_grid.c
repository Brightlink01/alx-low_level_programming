#include"main.h"
#include <stdlib.h>

/**
 *alloc_grid - function allocate a grid
 *@width: the or colomun of the array
 *@height: the height or row og the array
 *Return: the pointer of two diamention
 *
 */

int **alloc_grid(int width, int height)
{
int **str;
int i, j;
i = 0;

str = (int *)malloc((height * width) * sizeof(int));
if (str == NULL)
{
return (NULL);
}

if (width == 0 || height == 0)
{
return (NULL);
}
while (i < height)
{
j = 0;
while (j < width)
str[i][j] = 0;
j++;
}
i++;
}
}
