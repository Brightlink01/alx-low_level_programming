#include"main.h"

/**
 *rev_string - fnction that reverse the strings
 *@s: take char data type
 *Return: void that means successful
 */

void rev_string(char *s)
{

int i, count;
char *st_c, *en_c, c;
int len = 0;

for (i = 0; s[i]; i++)
{
len++;
}

count = len;
st_c = s;
en_c = s;

for (i = 0; i < count - 1; i++)
{
en_c++;
}

for (i = 0; i < count / 2; i++)
{
c = *en_c;
*en_c = *st_c;
*st_c = c;

st_c++;
en_c--;
}
}
