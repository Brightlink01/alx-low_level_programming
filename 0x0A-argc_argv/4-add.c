#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
/**
 *main - main function
 *@argc: integral part that count the argument
 *@argv: an array that takes the argument
 *Return: Always 0, successful
 *
 */
int main(int argc, char *argv[])
{
int i, sum;
sum = 0;
if (argc == 1)
{

printf("%d\n", 0);
}
for (i = 1; i < argc; i++)
{

if (!isdigit(argv[i]))
{
printf("Error\n");
return (1);
break;
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);

}
