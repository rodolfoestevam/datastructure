#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "portuguese");
	do {
		printf("Informe o %d valor: ");
		int *const numero;
		scanf("%d", numero);
		soma += numero;
		i++;
	}
	while(i <=5);
	printf("Soma %d\n", soma);
	getchar();

	return 0;
}