#include <stdio.h>

int main() {
        int x = 10;
        int *ponteiro;
        ponteiro = &x;

        printf("Valor de x: %i\n", x);
        printf("End de x: %i\n", &x);
        printf("&Ponteiro : %i\n", &ponteiro);
        printf("Ponteiro  : %i\n", ponteiro);
        printf("*Ponteiro de x: %i\n", *ponteiro);
        getchar();
  return 0;
}
