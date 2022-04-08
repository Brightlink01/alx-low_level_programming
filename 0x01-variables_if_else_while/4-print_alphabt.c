#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (success/correct)
 */
int main(void)
{
char al;
al = 'a';
while (al <= 'z')
{
if (al != 'e' && al != 'q')
{
putchar(al);
al++
}
else
{
al++;
}
}
putchar('\n');

return (0);
}
