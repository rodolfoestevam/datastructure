#include <stdio.h>
int main(int argc, char const *argv[]) {
  float salario,
          novo_salario,
          bonificacao,
          auxilio;

          printf("Digite o valor do salario\n");
          scanf("%f", &salario);
          //condicao
          if (salario <= 500) {
            bonificacao = salario * 5/100;
          }
          if ((salario > 500) && (salario  < 1200)) {
            bonificacao = salario * 12/100;
          }
          if (salario > 600) {
            auxilio = 150;
          }
          if (salario > 600) {
            auxilio = 100;
          }

          novo_salario = salario + bonificacao + auxilio;
          printf("Novo salario = %.2f\n", novo_salario);
  return 0;
}
