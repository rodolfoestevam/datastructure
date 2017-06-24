#include <stdio.h>
#define COMISSAO 0.3

int main()
{
    double venda;
    printf("Digite o valor da venda: \n");
    scanf("%lf", &venda);
    printf("Comissão = %lf \n", venda * COMISSAO);

    return  0;
}
