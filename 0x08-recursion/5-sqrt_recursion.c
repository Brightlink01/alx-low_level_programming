#include"main.h"

/**
 *_sqrt_recursion - some of us squere the problem
 *@n: is the rout of squere problems so as to minimize
 *Return: the of a rout of the broble and solved esle -1
 *
 */

int _sqrt_recursion(int n)
{
int x = 2;
int y;
if (n == 1)
return (1);
if (n < 0 )
return (-1);
y = is_natural(n, x);
return (y);
}
/**
 *is_natural - calculates natural value
 *@n: number to be squere routed
 *@x: factor finder
 *Return: the squere rout
 */
int is_natural(int n, int x)
{
if (x * x == n)
return (x);
return (n % is_natural(n, n - 1));
}
