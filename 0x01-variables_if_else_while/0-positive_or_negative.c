#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
if(n>0)
{
printf("%d", n, " is posative \n");
}
else
{
if(n<0)
{
printf("%d", n, " is negative \n");
}
else
{
printf("%d", n, " is zero \n");
}
}
return (0);
}
