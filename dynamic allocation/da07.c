#include <stdio.h>
#include <stdlib.h>

struct node {
  int num;
  node *prox;
};
//=============================================================
void AdicionarFIm(node *LISTA) { //push
  node *novo = (node *) malloc(sizeof(node));
  if(!novo){
    printf("Sem memoria disponivel !\n");
    system("pause");
  }
  else
  {
    novo -> prox = NULL;
    if (LISTA->prox == NULL)
        LISTA->prox=novo;
        else
        {
          node *tmp = LISTA->prox;
          while (tmp -> prox != NULL)
          tmp = tmp ->prox;
        }
      printf("Novo elemento: ");
      scanf("%d\n", &novo->num);
    }
  }
    void Exibir(node *LISTA){
      if(LISTA -> prox == NULL)
      printf("Lista vazia!");
      else {
        node *tmp;
        for (tmp=LISTA -> prox; tmp != NULL; tmp=tmp->prox)
        printf("%d ", tmp ->num);
      }
      printf("\n\n");
      system("PAUSE");
    }

    void Remover(node *LISTA){
      if (LISTA -> prox = NULL)
      printf("Lista vazia!");
      else {
        node *tmp = LISTA->prox;
        printf("No %d removido com sucesso!",  tmp->num);
        free(tmp);
      }
      printf("\n\n");
      system("PAUSE");
    }

    void Liberar(node *LISTA){
      node *atual = LISTA -> prox, *proximo;
      while(atual != NULL)
      {
          proximo = atual -> prox;
          free(atual);
          atual = proximo;
      }
      LISTA -> prox = NULL
    }

    int main(void)
    {
      node *LISTA = (node *) malloc(sizeof(node));
      if (!LISTA) {
        printf("Sem memoria disponível! \n");
        exit(1);
      }
      LISTA -> prox = NULL; //Initialize node
      int opt;
      do {
          system("CLS");
          printf("========================\n");
          printf("         FILA ENCADEADA            \n");
          printf("========================\n");
          printf("    1 - Adicionar                           \n");
          printf("    2 - Remover                             \n");
          printf("    3 - Exibir Fila                           \n");
          printf("    4 - Liberar fila                          \n");
          printf("    5 - Sair                                      \n");
          printf("======================== \n");
          scanf("%d",  &opt);
          system("CLS");

          switch(opt)
          {
            case 1: AdicionarFIm(LISTA);
                          break;
            case 2: Remover(LISTA);
                          break;
            case 3: Exibir(LISTA);
                          break;
            case 4: Liberar(LISTA);
                          Exibir(LISTA);
                          break;
            case 5: AdicionarFIm(LISTA);
                          break;
            default: printf("Comando invalido \n\n");
          }
        } while (opt != 5);
        free(LISTA);
        return 0;
}
