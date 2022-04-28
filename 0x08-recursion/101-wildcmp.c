#include"main.h"
#include <string.h>

/**
 *wildcmp - comparing the strings
 *@s1: the first string to be compare
 *@s2: the second string to be compared
 *Return: integral value
 *
 */

int wildcmp(char *s1, char *s2)
{

int err;
err = 0;

if (strlen(s1) - strlen(s2) > 1 || strlen(s1) - strlen(s2) < 1)
return (0);

if (*s1 == '\0' && *s2 == '\0' || err == 2)
return (err);

if (*s1 != *s2)
err++;

return (wildcmp(s1 + 1, s2 + 1));

}
