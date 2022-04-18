#include"main.h"

/**
 *print_rev - reverse the string value
 *@s: is char data type
 *Return: void success full
 *
 */

void print_rev(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
