#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (success/correct)
 */
int main(void)
{
char al;
for ( al = 'a' al <= 'z' al++)
{
if (al == 'e')
continue;
else if (al == 'q')
continue;

putchar(al);

}

putchar('\n');

return (0);
}
