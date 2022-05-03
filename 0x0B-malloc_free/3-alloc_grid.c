#include"main.h"
#include <stdlib.h>
#include <string.h>

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
int k, i, j;
i = 0;
k = 0;
if (width == 0 || height == 0)
{
return (NULL);
}
str = (int **)malloc(height *sizeof(int*));
if (str == NULL)
{
return (NULL);
}
for (k = 0; k < height; k++)
{
str[k] = (int *)malloc(width * sizeof(int));
if str[k] == NULL)
{
return (NULL);
}
}
while (i < height)
{
j = 0;
while (j < width)
{
str[i][j] = 0;
j++;
}
i++;
}
return (str);
}
