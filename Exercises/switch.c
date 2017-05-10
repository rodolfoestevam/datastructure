#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	int numero;
	setlocale(LC_ALL,"portuguese");
	printf("Informe um numero entre 1 e 3: \n");
	scanf("%d", &numero);
	switch(numero)
	{
		case 1: 
				printf("Voce digitou o 1.\n");
				break;
		case 2:
				printf("Voce digitou o 2.\n");
				break;
		case 3:
				printf("Voce digitou o 3.\n");
				break;
		default:
			printf("Voce digitou um numero invalido! \n");
			break;

	}
	getchar();
	return 0;
}