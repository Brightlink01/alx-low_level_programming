#include <stdio.h>

/**
 * main - main Entry
 * Return: Always 0 (success/correct)
 */

int main(void)
{
int num;
 int num2;
for (num = 0; num <= 98; num++)
{
num2 = num + 1;
for (; num2 <= 99; num2++)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');
if (num == 98 && num2 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
