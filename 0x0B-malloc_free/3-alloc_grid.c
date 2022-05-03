/**
 *alloc_grid - function allocate a grid
 *@width: the or colomun of the array
 *@height: the height or row og the array
 *Return: the pointer of two diamention
 *
 */

int **alloc_grid(int width, int height)
{
char **str;
int i, j;
i = 0;

str = (int *)malloc((height * width) * sizeof(int));
if (str == NULL)
{
return (NULL);
}

if (width == NULL || height == NULL)
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
