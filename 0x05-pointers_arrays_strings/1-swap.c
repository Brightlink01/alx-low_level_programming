#include"main.h"

/**
 *swap_int - swaping function
 *@a: integer value to be swaped
 *@b: integral value to be swap
 *Return: void successful
 */

void swap_int(int *a, int *b)
{

int temp;
temp = *a;
*a = *b;
*b = temp;
}
