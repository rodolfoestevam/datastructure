#include <stdio.h>

int main(void)
 {
   int matriz [3] [2];
    matriz[0] [0] = 1;
    matriz[1] [0] = 2;
    matriz[2] [0] = 3;
    matriz[0] [1] = 4;
    matriz[1] [1] = 5;
    matriz[2] [1] = 6;

    printf("%i\n",  matriz[0] [0]);
    printf("%i\n",  matriz[1] [0]);
    printf("%i\n",  matriz[2] [0]);
    printf("%i\n",  matriz[0] [1]);
    printf("%i\n",  matriz[2] [1]);
    printf("Tamanho do vetor: %i bytes." ,sizeof(matriz));
  return 0;
}
