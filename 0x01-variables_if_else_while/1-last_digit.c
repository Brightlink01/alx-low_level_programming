#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
  int n;
  int last_digit;
  int first_digit;
 
  srand(time(0));
  n = rand () - RAND_MAX / 2;
  last_digit = n % 10;
  while (last_digit >= 10)
    {
      last_digit = last_digit/10;
    }
  if (last_digit > 5)
    {
      printf("Last digit of %d ", n, " is %d ", last_digit ," and greater than 5 \n");
    }
  else
    {
      if (last_digit !=&& last_digit < 6)
	{
	  printf("Last digit of %d ", n " is %d ", last_digit, " and less than 6 \n");
	}
      else
	{
	  printf("Last digit of %d ", n, " is %d ", last_digit, " and is 0\n");
	}
    }
  return (0);
}
