#include "main.h"
#include <stdio.h>

int main(void)
{

char str[] = "expect the best. prepare for the worst.Capitalize on what comes \n hello -world 0123456hello world\thello world.hello world\n";
  char *ptr;
  ptr = cap_string(str);
  printf("%s", ptr);
  printf("%s", str);
  return (0);
}
