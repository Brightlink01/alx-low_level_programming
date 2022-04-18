#include"main.h"

/**
 *puts_half - print half of string
 *@str: pointer of type char
 *Return: void succesful
 */

void puts_half(char *str)
{
int i, last;
i = 0;
while (str[i] != '\0')
{
i++;
}
last = (i + 1) / 2;

for (i = last; str[i]; i++)
{

_putchar(str[i]);

}
_putchar('\n');
}
