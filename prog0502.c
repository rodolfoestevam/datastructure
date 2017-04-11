#include <stdio.h>
linha()
{
  int i;
  for (i = 0; i <=20; i++){
    putchar('*');
    putchar('\n');
}}
int main()
{
int i;
linha();
linha();
for (i = 0; i <=5; i++) {
  printf("%d\n", i);
  linha();
}
  return 0;
}
