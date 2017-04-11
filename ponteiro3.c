#include <stdio.h>

int main()
{
int nr = 10, *p1, **p2;
p1 = &nr;
p2 = &p1;
printf("Valor de   nr : %i\n",  nr);
printf("Valor de *p1 : %i\n",  p1);
printf("Valor de **p2 : %i\n",  p2);
getchar();

  return 0;
}
