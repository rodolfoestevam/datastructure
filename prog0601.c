#include <stdio.h>

int main() {
 float salario[12];
 float total;
 int i;
 for (i = 0; i <12; i++)
 {
    printf("Introduza o salario do mes %d:", i+1);
    scanf("%f",&salario[i]);
 }

 puts("  Mes            VALOR");
  for ( i = 0, total=0.0; i < 12; i++) {
    printf("%3d         %9.2f\n", i+1, salario[i]);
    total += salario[i];
 }
  printf("Total Anual: %9.2f\n", total);
  return 0;
}
