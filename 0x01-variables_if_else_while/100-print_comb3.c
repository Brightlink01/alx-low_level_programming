#include <stdio.h>

/**
 *
 * main - Entry point
 *
 *Return: Always 0 (success/correct)
 */

int main(void)
{
int i;
int j;
for (i =48; i <= 57; i++)
{
j+=i;
for (; j <= 57; j++)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
