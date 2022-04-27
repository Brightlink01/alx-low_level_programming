#include"main.h"

/**
 *_print_rev_recursion - reverse the out put of string
 *@s: s is the string to printed
 *Return: void successful / correct
 *
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);

}
