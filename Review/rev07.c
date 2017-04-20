#include <stdio.h>

int verifica(int n1, int n2, int *soma, int *produto);
int main()
 {
    int
    n1 = 10,
    n2 = 10,
    s = 0,
    p = 0;
    
    printf("Valor de retorno %i\n\n", verifica(n1,n2, &s, &p));
    printf("Soma = %i\n\n", s);
    printf("Produto = %i\n\n", p);
    getchar();
  }
  int verifica(int n1, int n2, int *soma, int *produto)
  {
    printf("N1: %i\n\n", n1);
    printf("N2: %i\n\n", n2);
    *soma = (n1 + n2);
    *produto = (n1 * n2);

    if(n1==n2)
      return 0;
      else
      if (n1 > n2)
          return 1;
          else
          return 2;
  }
