#include"main.h"
#include <stdio.h>

/**
 *_abs - take intiger and return integer
 *@n: takes in an integer
 *Return: always positive integer if == 0, 0
 *
 */
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
return (n);
}
