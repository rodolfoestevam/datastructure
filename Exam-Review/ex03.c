#include <stdio.h>

int main(int argc, char const *argv[]) {
    int i, num1, num2;
    int soma =0;

    printf("\nDigite o primeiro numero: \n");
    scanf("%i", &num1);

    printf("\nDigite o segundo numero: \n");
    scanf("%i", &num2);

    for (i = num1;  i <= num2; i++) {
      soma = soma +1;
      printf("\n\n Soma dos numeros = %.d\n", soma);
    }
  return 0;
}
