#include"main.h"

/**
 *reverse _array - function that reverse strings
 *@a: a pointer that holds string to be reversed
 *@n: n is the number of array of element
 *Return: void always true;
 */

void reverse_array(int *a, int n)
{
int i, j;
for (i = 0; i < (n / 2); i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}
