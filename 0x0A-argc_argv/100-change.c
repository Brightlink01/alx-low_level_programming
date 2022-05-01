#include<stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the c program
 * @argc: number of argument entered
 * @argv: Holds the string argument entred in command line
 * Return: Always 0, successful
 *
 */

int main(int argc, char *argv[])
{
int cent, coinnm = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
cent = atoi(argv[1]);
while (cent > 0)
{
if (cent >= 25)
cent -= 25;
else if (cent >= 10)
cent -= 10;
else if (cent >= 5)
cent -= 5;
else if (cent >= 2)
cent -= 2;
else if (cent >= 1)
cent -= 1;
coinnm += 1;
}
}
printf("%d\n", coinnm);
return (0);
}
