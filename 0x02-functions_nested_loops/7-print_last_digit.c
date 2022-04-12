#include"main.h"

/**
 *print_last_digit - prints last digit of number
 *@n:takes an intiger 
 *Return: Return output
 *
 */
int print_last_digit(int n)
{
int ln;
ln = n % 10;
if (n < 0)
ln = ln * -1;
_putchar(ln + '0');

return (ln);
}
  
  
