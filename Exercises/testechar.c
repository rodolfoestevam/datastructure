#include <stdio.h>
#include <locale.h>
int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "portuguese");
	char letra = 'A';
	printf("O código ASCI %i = %c\n", letra, letra);	
	return 0;
}