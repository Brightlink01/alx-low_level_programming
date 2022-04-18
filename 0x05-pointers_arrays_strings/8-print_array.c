#include"main.h"
#include<stdio.h>

/**
 *print_array - array pringing func
 *@a: pointer of int type
 *@n: inegral variable
 *
 *Return: void means successful
 *
 */

void print_array(int *a, int n)
{
int i;
while (i < n)
{
printf("%d", a[i]);
if (i < n-1)
{
printf(", ");
}
i++;
}
printf("\n");
}
