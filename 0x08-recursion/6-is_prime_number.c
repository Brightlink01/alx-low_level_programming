#include"main.h"
/**
 *is_prime_number - chechks prime number
 *@n: n is the number tobe checked
 *Return: 1 for prime and 0 otherwise
 *
 */

int is_prime_number(int n)
{
int x;
int y;
x = 2;

if (n == 2)
return (1);
if (n <= 1)

return (0);
y = is_prime(n, x);
return (y);

}
/**
 *is_prime - calculate primes
 *@n: number to passed
 *@x: fatoril finder
 *
 *Return: the prime 1 for prime
 */

int is_prime(n, x)
{

if (n % x == 0)
return (0);
if (x * x > n)
return (1);
return (is_prime(n, x + 1));

}
