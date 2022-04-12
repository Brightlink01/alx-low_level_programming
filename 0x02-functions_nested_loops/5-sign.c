#include"main.h"

/**
*print_sign - takes intiger and return 1 for posative 0 for zero and 
-1 for negative n value
*@n: takes integer value
*Return: 1 for psitive number, 0 for zero and -1 for negative number
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
