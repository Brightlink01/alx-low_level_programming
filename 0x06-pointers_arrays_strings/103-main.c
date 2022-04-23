#include"main.h"
#include <stdio.h>

int main(void)
{

  char *n = "1234569875";
  char *m = "5698425602";
  char r[11];
  char *res;

  res = infinite_add(n, m, r, 11);
  printf("%s + %s = %s\n", n, m, res);
  
  return (0);
}
