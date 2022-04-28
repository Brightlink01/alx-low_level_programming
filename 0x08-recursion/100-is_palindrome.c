#include"main.h"
#include <string.h>
/**
 *is_palindrome - check for palidrome
 *@s: the string to be checked
 *Return: Integral value 1 or 0
 *
 */

int is_palindrome(char *s)
{

int n = strlen(s);
if (n == 0)
return (1);

return (isPalRec(s, 0, n - 1));
}

/**
 *isPalRec - compares the string back to fromt
 *@s: is stream of string
 *@e: the size of the strings
 *@str: the stream of the string
 *Return: integral value
 */
int isPalRec(char *str, int s, int e)
{

if (s == e)
return (1);
if (str[s] != str[e])
return (0);
if (s < e + 1)
return (isPalRec(str, s + 1, e - 1));
return (1);

}
