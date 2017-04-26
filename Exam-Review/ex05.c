#include <stdio.h>

int main()
 {
  float salario,
          salarioReceber,
          gratificacao,
          imposto;

  printf("Digite o salario do fdp \n");
  scanf("%f", &salario);

  gratificacao = salario * 5 / 100;
  imposto = salario * 7 / 100;
  salarioReceber = gratificacao + salario - imposto;

  printf("O salario a receber do funcionario fdp é = %.2f \n", salarioReceber);


  return salario;
}
