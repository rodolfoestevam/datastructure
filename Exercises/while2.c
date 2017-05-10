#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	int i = 1, numero, soma=0;
	setlocale(LC_ALL, "portuguese");
	while (i <=5 ){
		printf("Informe o %d valor: " 1 );
		scanf("%d", numero);
		soma += numero;
		i++;
	}
	printf("Soma %d\n", soma);
	getchar();

	return 0;
}