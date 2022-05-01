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
boolean checkdigit(int n)
{
if (isdigit(n))
return (true);
else
return (false);
}
    
int main(int argc, char *argv[])
{
int i, sum;
boolean bol;
sum = 0;
if (argc <= 1)
{
printf("%d\n", 0);
}
else
{

while (i < argc)
{

bol = checkdigit(argv[i]);
if (bol)
sum += atoi(argv[i]);
else
break;
}
if (!bol)
{
printf("Error\n")
return (1);
}
printf("%d\n", sum);
}

return (0);

}
