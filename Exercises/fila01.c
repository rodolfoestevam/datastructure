#include <stdio.h>
#include <stdlib.h>
#define MAX 3
struct s_conjuge
{
  char nome[MAX] [20];
};

struct s_cliente
{
  char nome[MAX] [20];
  int fone [MAX];
  struct s_conjuge conjuge;
};
int main(void) {
  struct s_cliente cliente[MAX];
  int i;
  for ( i = 0; i < MAX; i++)
   {
    printf("Ficha : %d\n",  i+1);
    printf("Nome : ");
    scanf(" %20[^\n]", &cliente[i].nome);
    printf("Fone : ", );
    scanf(" %10[^\n]", &cliente[i].fone );
    printf("conjuge:  ");
    scanf(" %20[^\n]", &cliente[i].conjuge.nome);
    system("cls");
  };
  for ( i = 0; i < MAX; i++)
  {
  printf("Ficha : %d\n", i+1);
  printf("-------------------------------\n", );
  printf("Nome : %s\n", cliente[i].nome);
  printf("Fone : %s\n", cliente[i].fone);
  printf("Conjuge: %s\n", cliente[i].conjuge.nome);
};
system("pause");
  return 0;
}
