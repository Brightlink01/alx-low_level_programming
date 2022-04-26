#include <stdio.h>

/**
* main - entry point
* Return: 1 Advanced taxs hello world
*/

int main(void)
{
char *ch1 = "and that piece of art is useful";
char *ch2 = "\" - Dora Korpar, 2015-10-19";
int i;
for (i = 0; ch1[i] != '\0'; i++)
{
putchar(ch1[i]);
}
for (i = 0; ch2[i] != '\0'; i++)
{
putchar(ch2[i]);
}
putchar('\n');
return (1);
}
