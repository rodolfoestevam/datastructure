#include <stdio.h>
int main(void)
{
  int vetor[2], *v;
  v = vetor;
  v[0] = 123;
  v[1] = 456;
signed char c;
c = 'a';

printf("valor de c: %c\n", c);
  printf("Vetor[0] %d\n",  vetor[0]);
  printf("Vetor[1] %d\n",  vetor[1]);
  getchar();
  return 0;
}
