#include<stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0, (success/correct)
 */

int main(void)
{
unsigned long s1;
unsigned long s;
unsigned long i;
unsigned long tp;
 unsigned long sum;
s = 2;
s1 = 1;

for (i = 0; i <= 49; i++)
{
if (i == 0)
{
sum = s+sum;
}
if (s >= 4000000)
{
break;
}
else if (i < 49)
{
tp = s;
s = s + s1;
if (s % 2 == 0)
{
sum =s+sum;
s1 = s;
}
else
{
s1 = tp;
}
}
}
return (0);
}
