#include <stdio.h>

int main(int argc, char const *argv[]) {
        int x = 10;
        int *ponteiro;
        ponteiro = &x;

        int y = 20;
        *ponteiro = y;

        printf("x: %i\ny: %i", x, y);
        getchar();
  return 0;
}
