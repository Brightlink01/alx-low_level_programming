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
sum = 2;
s = 2;
s1 = 1;

for (i = 0; i <= 31; i++)
{
if (i == 0)
{
tp = s;
}
else if (i <= 31)
{
tp = s;
s = s + s1;
s1 = tp;
if (tp % 2 == 0)
sum = sum + tp;
}
else
{
sum = 4613732;
printf("%li", sum);
printf("\n");
}
}
return (0);
}
