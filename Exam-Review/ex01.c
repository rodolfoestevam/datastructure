#include <stdio.h>
int main(int argc, char const *argv[]) {

  float salario,
          salarioReceber,
          gratificacao,
          imposto;

printf("Informe qual é o salário do funcionário\n");
scanf("%f", &salario);

gratificacao = salario * 2 / 100;
imposto = salario * 3 / 100;
salarioReceber = salario + gratificacao - imposto;

printf("Salario a receber = %.2f\n", salarioReceber);

  return 0;
}
