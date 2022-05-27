#include<stdio.h>
#include "main.h"

/**
 * binary_to_uint - it conversts the binary string to unsigned int.
 * @b: A pointeris pointer to the binary charaters.
 *
 * Return: unsigned int if the b is has stream of binary other wise NULL or 0.
 *
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int number = 0, multplier = 1;
int leng;

if (!b)
return (0);
while(b[leng])
leng++;

for (leng -= 1; leng >= 0; leng--)
{
if (b[leng] != '0' && b[leng] != '1')
return (0);

number += (b[leng] - '0') * multplier;
multplier *= 2;
}

return (number);
}
