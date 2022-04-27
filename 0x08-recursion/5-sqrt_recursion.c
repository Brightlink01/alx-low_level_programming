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
y = is_natural(n, x);
return (y);
}
int is_natural(int n, int x)
{ int y, z;
y = n % x;
z= x * x;
if (y == 0 && z == n )
return (x);
is_natural(n, x + 1);
if (z > n)
return (0);
x = 2;
}
