#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n1;
	setlocale(LC_ALL, "portuguese");
	printf("Informe um número: \n");
	scanf("%i", &n1);
	printf("O dobro de %i é %i\n", n1,n1*2);
	getchar();
	return 0;
}