#include"main.h"

/**
*_strlen - length of the string
*@s: A pointer to an int
*Return: void that means always corrct
*
*/

int _strlen(char *s)
{
int u;
u = 0;
while (s[u] != '\0')
{
u++;
}

return (u);
}
