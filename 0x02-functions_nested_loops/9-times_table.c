#include"main.h"

/**
 *times_table - prints time table
 *void returns nothing;
 */

void times_table(void)
{
int i;
int j;
int k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
k = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (k >= 10)
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
else if (k < 10 && j != 0)
{
_putchar(' ');
_putchar(k % 10 + '0');
}
else
{
_putchar((k % 10) + '0');
}
}
_putchar("\n");
}
}
