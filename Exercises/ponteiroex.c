#include <stdio.h>

        int main() {
                    int x  = 10;
                    int *ponteiro;
                    ponteiro = &x;
                    printf("o valor de x : %i\n",  x );
                    printf("End. de x : %i\n", &x );
                    printf("o &ponteiro : %i\n", &ponteiro);
                    printf("o valor de x : %i\n",  ponteiro);
                    printf("o valor de x : %i\n",  *ponteiro);
                    getchar();
                return 0;
        }
