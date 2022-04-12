#include"main.h"

/**
* print_alphabet - is function that prints alphabets
* Return: nothing
*/

void print_alphabet(void)
{
char alp;
int i;
for (i = 0; i <= 9; i++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{

_putchar(alp);

}
_putchar('\n');

}
}
/**
 * main - check the code
 * Return: Always 0
 */

