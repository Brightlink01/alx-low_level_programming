#include"main.h"

/**
 *rot13 - used to encode the message from main
 *@src: is pointer that has source message
 *Return: returns Pointer src char type
 *
 */

char *rot13(char *src)
{
int i, j;
char inp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char encod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMNopqrstuvwxyzabcdefghljklm";

for (i = 0; src[i] != '\0'; i++)
{
for (j = 0; inp[j] != '\0'; j++)
{
if (src[i] == inp[j])
{
src[i] = encod[j];
break;
}
}
}
return (src);
}
