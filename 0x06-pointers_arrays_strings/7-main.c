#include"main.h"
#include <stdio.h>

/**
 *main - check the codefor
 *
 *Return: Always 0.
 */
int main(void)
{
  char s[] = "Expect the best. prepare for the worest. Cpitalize on what comes. \n";
  char *p;
  p = leet(s);
  printf("%s", p);
  printf("%s", s);
  return (0);
}
