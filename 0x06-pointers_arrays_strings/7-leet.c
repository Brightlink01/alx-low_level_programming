#include"main.h"

/**
 *leet - function replaces alphabet by numbers
 *@srg: pointer used pass strings
 *Return: chp;
 */

char *leet(char *srg)
{
int i, j;

char lw[] = "aeotl";
char up[] = "AEOTL";
char num[] = "43071";

for (i = 0; srg[i] != '\0'; i++)
{

for (j = 0; lw[j] != '\0'&& up[j] != '\0'; j++)
{
if (srg[i] == lw[j] || srg[i] == up[j])
{
srg[i] = num[j];
break;
}
}
}
return (srg);
}
