#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (success/correct)
 */

int main(void)
{
int i;
int j;
int k;

for (i = 48; i <= 55; i++)
{
j = i + 1;
for (; j < 57; j++)
{
k = j + 1;
for (; k <= 57) k++)
{

putchar(i);
putchar(j);
putchar(k);
if (k == 57 && j == 56 && i == 55)
{
break;
}

putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
