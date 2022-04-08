#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
alph = 'A';
while(alph <= 'Z')
putchar(alph);
 
putchar('\n');

return (0);
}
