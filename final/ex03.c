#include <stdio.h>
#define SOMA(a, b) (a+b)

int main()
{
  int a, b;
  printf("Digite valor A: ");
  scanf("%d", &a);
  printf("Digite valor B: ");
  scanf("%d", &b);
  printf("%d + %d = %d", a, b, SOMA(a,b));

  return 0;
}
