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
int i;
for (i = 0; i < argc; i++)
{
printf("%s ", argv[i]);
}
printf("\n");
return (0);

}
