#include <stdio.h>
int main(int argc, char const *argv[]) {
  char ch;
  printf("Introduza um caractere: \n");
  ch = getchar();
  printf("O caractere introduzido foi: '%c'\n", ch);
  return 0;
}
