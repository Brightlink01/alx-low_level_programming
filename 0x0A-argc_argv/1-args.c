#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: integral part that count the argument
 *@argv: an array that takes the argument
 *Return: Always 0, successful
 *
 */

int main(int argc, char *argv[])
{

if (!argv[argc])
printf("%d \n", argc - 1);
return (0);

}
