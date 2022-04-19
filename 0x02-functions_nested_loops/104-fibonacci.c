#include<stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0, (success/correct)
 */

int main(void)
{
unsigned long s1, m, n, carry;
unsigned long s, m0, n0;
unsigned long i;
unsigned long tp;
s = 2;
s1 = 1;

for (i = 0; i <= 97; i++)
{
if (i == 0)
{
printf("%li", s1);
printf(",");
printf(" ");
printf("%li", s);
}
else if (i <= 91)
{
tp = s;
printf(",");
printf(" ");
s = s + s1;
printf("%li", s);
s1 = tp;
}
else
{
m = s % 1000;
n = s / 1000;
m0 = s1 % 1000;
printf("\n");
}
}
return (0);
}
