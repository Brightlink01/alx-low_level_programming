#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 * Return: void and the recursion is not restriction
 */

void print_number(int n)
{

int sign, pwr, cary;
cary = n;
pwr = 1;
sign = 0;

if (n < 0)
{
_putchar('-');
sign = 0;

}

while (cary > 9 || cary < -9)
{
pwr = pwr * 10;
cary = cary / 10;

}
while (pwr > 0)
{
if (pwr > 9)
{
if (!sign)
_putchar((n / pwr % 10) + '0');
else
_putchar((n / pwr % 10) * -1 + '0');
pwr = pwr / 10;
}

if (pwr == 1)
{
if (sign)
_putchar((n % 10) * -1 + '0');
else
_putchar((n % 10) + '0');
pwr = 0;
}
}
}
