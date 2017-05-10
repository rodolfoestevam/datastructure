#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int *p = (int *) malloc(sizeof(int));
  printf("Endereco: %i\n", p);
  system("pause");

  return 0;
  }
