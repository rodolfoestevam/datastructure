#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"portuguese");

	int i,numero, soma=0;

	for(i=1; i<=5; i++){

		printf("Informe o %d o valor: ",i);

		scanf("%d",&numero);

		soma += numero;

		}

		printf("Soma: %d \n",soma);

		getchar();

	}
