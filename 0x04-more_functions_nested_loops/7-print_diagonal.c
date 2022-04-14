#include "main.h"

/**
*print_diagonal - draws a diagonal line on the terminal
*@nl: integer number should be printed
*Return: it return nothing
*/

void print_diagonal(int nl)
{
if (nl <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < nl; i++)
{
for (j = 0; j < nl; j++)
{
if (j == i)
_putchar('\\');
else if (j < i)
_putchar(' ');
}
_putchar('\n');
}      
}
}
