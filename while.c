#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	int i = 1, numero, soma = 0;
	while(i <= 5){
		setlocale(LC_ALL, "portuguese");
		printf("Informe o %d valor: ",i );
		scanf("%d", &numero);
		soma += numero;
		i++;
	}
	printf("Soma: %d\n", soma);
	getchar();
	return 0;
}