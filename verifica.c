        #include <stdio.h>
        int verifica (int n1, int n2,  int *soma, int *produto);
        int main() {
          int n1 = 10, n2 = 10, soma = 0, produto =0;
          printf("Valor de retorno: %i\n\n",  verifica(n1,n2, &soma, &produto));
          printf("Soma: %i\n\n",  soma);
          printf("Produto %i\n\n", produto);
          getchar();

}
          int verifica(int n1, int n2, int *soma, int *produto)
          {
            printf("N1: %i\n\n", n1);
            printf("N1: %i\n\n", n2);
            *soma = (n1 + n2);
            *produto = (n1 * n2);
            if (n1 == n2)
            return 0;
            else
            if (n1 > n2)
              return 1;
              else
              return 2;
              /* code */


        }
      
