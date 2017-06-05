#include <stdio.h>
int main() {

    int i = 0;
    while (i < 10) {
      if (i%2 !=0)
        printf("%d", i%2);
        i++;

      printf("%d\n", i);
      
      getchar();
      return 0;
    }
  }
