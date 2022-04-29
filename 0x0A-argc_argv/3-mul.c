#include <stdio.h>
#include"math.h"
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
int i;
if (argc < 3 && argc > 3)
{

printf("Error\n");
return (1);
}

i = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", i);

return (0);
}
