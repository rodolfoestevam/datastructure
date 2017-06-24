#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  int x = 10, y = 5, z;
  z = x++, + y;

  printf("x      =    10\n");
  printf("y      =    5\n\n");
  printf("z      =    x++ +y  = %d\n\n", z);
  printf("x      =    %d\n\n", x);

  system("PAUSE");
  return 0;
}
