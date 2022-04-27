#include"main.h"

/**
 *_strlen_recursion - retrn s the lenth of strings Tsedal
 *@s: string the are found tsedal hold void pointer of fun
 *Return: int len is the string found in me
 *
 */

int _strlen_recursion(char *s)
{

int len;
len = 0;

if (*s == '\0')
return (0);
len++;
len = len + _strlen_recursion(s + 1);
return (len);
}
