#include <stdio.h>

int main(int argc, char const *argv[]) {
            int matriz [3] [2] = {1, 4, 2, 3, 5, 6};
            printf("%d\n",matriz[0] [0]);
            printf("%d\n",matriz[1] [0]);
            printf("%d\n",matriz[2] [0]);
            printf("%d\n",matriz[0] [1]);
            printf("%d\n",matriz[1] [1]);
            printf("%d\n",matriz[2] [1]);
            printf("Tamanho do vetor: %d\n bytes.",sizeof(matriz));
  return 0;
}
