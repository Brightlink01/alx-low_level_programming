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
if (argc >= 0)
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);

}
