#include"main.h"
#include <string.h>

/**
 *wildcmp - comparing the strings
 *@s1: the first string to be compare
 *@s2: the second string to be compared
 *Return: integral value
 *
 */

int wildcmp(char *s2, char *s1)
{

int i;
int l1;
int c;
 
l1 = strlen(s1);
c = 0;
i = 0;


if (i < l1)
{

if(*s1 == *s2 || *s1 == '*' || *s2 == '*')
c++;
i++;
wildcmp(s1 + 1,s2 + 1);

}

if(c == i)
return 1;
return 0;

}
