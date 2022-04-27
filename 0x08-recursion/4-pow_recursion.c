#include"main.h"

/**
 *_pow_recursion - the recursion power fun
 *@x:is the powering int
 *@y: is the powered int
 *Return: power of x
 *
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y >= 1)
{
return (x * _pow_recursion(x, y - 1));
}
return (1);
}
