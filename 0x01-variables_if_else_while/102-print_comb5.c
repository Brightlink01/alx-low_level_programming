#include <stdio.h>

/**
 * main - main Entry
 * Return: Always 0 (success/correct)
 */

int main(void)
{
int i;
int j;
int k;
int y;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 56; j++)
{
for (k = 48; k <= 57; k++)
{
for (y = 48; y <= 57; y++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(y);
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
