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
if(s==NULL || s1==NULL)
            return -2
 
    if(strcmp(s,s1)==0) // the two strings are identical
        return 0;
 
    if((s[0])==(s1[0]) && (s[0])==((s1+1)[0]))
        CompareStrings(s, ++s1);
    else if((s[0])==(s1[0]) && (s1[0])==((s+1)[0]))
        CompareStrings(++s, s1);
    else if((s[0])==(s1[0]))
        CompareStrings(++s, ++s1);
    else
        return -1;

}
