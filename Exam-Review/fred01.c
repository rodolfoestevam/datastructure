#include <stdio.h>
 int main(int argc, char const *argv[]) {
  float sal, salreceber, grat, imp;
  printf("\nDigite o salario do funcionario");
  scanf("%f", &sal);

  grat = sal * 8 / 100;
  imp = sal * 5 / 100;
  salreceber = sal + grat - imp;

  printf("\nSalario a receber = %.f", salreceber);
  getchar();
  return 0;
}
