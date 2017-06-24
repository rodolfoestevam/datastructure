#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a = 4, b = 2, c = 3, d = 4, res;
  res = c * (++d * 8 / 2) / (b--  +2 + a/b) * 2;

    printf("Resultado = %.d\n", res);
  getchar();

return 0;
 }
