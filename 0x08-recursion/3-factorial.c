#include"main.h"

/**
 *factorial - return the factoria of n
 *@n: n is the integral number to be factored
 *
 *Return: int the fact of n;
 *
 */

int factorial(int n)
{
if (n < 0)
{

return (-1);
}

if (n == 0)
return (0);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
