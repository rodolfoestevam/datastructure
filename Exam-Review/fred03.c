#include <stdio.h>

int verifica(int n1, int n2, int  *soma, int *produto){
  *soma = (n1 + n2);
  *produto = (n1 * n2);
  return 0;
}
int main() {
   int n1 = 10,  n2 = 10, s = 0, p = 0;
  verifica(n1, n2, &s, &p);
  printf("Soma = %i\n\n", s);
  printf("Produto = %i\n\n", p);
  getchar();
  return 0;
}
