#include <stdio.h>
int main(void)
{
          int *v, vetor[5] = {1,2,3,4,5};
          v = &vetor[0];
          printf("*v \t = &d\n", *v);
          v++;
          printf("v++\n");
          printf("*v  \t = %d\n", *v);
          v--;
          printf("v-- \n");
          printf("*v  \t = %d\n", *v);
          printf("* (v+1)\t = %d\n", *(v+1));
          printf("v[2]  \t = %d\n", v[2]);
          printf("v[3]  \t = %d\n", v[3]);
          getchar();
  return 0;
}
