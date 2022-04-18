#include"main.h"
/**
 *is_numberical - check if it is a digit
 *@n: number 
 *Return: if it is number 1 other wise 0
 */

int is_numerical(unsigned int n)
{
return (n >= '0' && n <= '9');
}

/**
 *_atoi - willing to sacrfices nuber than people
 *@s: pointer value 
 *
 *Return: integeral type
 *
 */

int _atoi(char *s)
{
unsigned int num, i;
int sign;

sign = 1;
num = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (is_numerical(s[i]))
{
num = (s[i] - 48) + num * 10;

if (s[i + 1] == ' ')
break;
}
else if (s[i] == '-')
{
sign *= -1;
}
}
return (num * sign);
}
  
