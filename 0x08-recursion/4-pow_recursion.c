#include"main.h"

/**
 *_pow_recursion - the recursion power fun
 *@x:is the powering int
 *@y: is the powered int
 *Return: power of x
 *
 */

int int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

if (y == 1)
return (y);
if(y >= 1)
{
y--;
return (x * _pow_recursion(x, y - 1));
}
}
