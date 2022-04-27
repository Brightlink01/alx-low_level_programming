#include"main.h"
/**
 *_puts_recursion - it prints the strings
 *@s: is the string of to be printed 
 *Return: Void successful
 *
 */
void _puts_recursion(char *s)
{
  if (*s == '\0')
    {
      _putchar('\n');
      return ;
    }
  _putchar(*s);
  _puts_recursion(s+1);
}
