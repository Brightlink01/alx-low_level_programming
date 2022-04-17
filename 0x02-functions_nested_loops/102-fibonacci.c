#include<stdio.h>

/**
 * main - Entry point of the program
 * Return : Always 0 (success/correct)
 */

int main(void)
{
unsigned long s1;
unsigned long s;
unsigned long i;
unsigned long tp;
s = 2;
s1 =1;

for (i = 0; i <= 49; i++)
{
if (i == 0)
{
printf("%li", s1);
printf(",");
printf(" ");
printf("%li", s);
}
else if (i < 49)
{
tp = s;
printf(",");
printf(" ");
s = s+s1;
printf("%li", s);
s1 = tp;
}
else
{
printf("\n");
}
}
return (0);
}
