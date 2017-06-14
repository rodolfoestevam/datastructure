#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 3

int dado[MAX], QTD, OP, I;

//[inserir]
int push(void) {
    if (QTD == MAX)
        printf("A fila está cheia!\n\n");
        else
        {
            for(I = QTD; I > 0; I--)
                dado[I] = dado[I-1];
                printf("Digite o valor para entrar na lista: ");
                scanf("%d", &dado[0]);
                printf("\n %d armazenado em %d\n\n", dado[0], 0);
                QTD++;
        }
        return  0;
    }

int pop(void){
    if (QTD == 0)
    printf("A fila está vazia!\n\n");
    else
    {
        QTD--;
        printf("Elemento %d removido \n", dado[0]);
        for(I = 0; I < QTD; I++)
            dado[I] = dado[I+1];
            dado[I] = 0;
    }
    return 0;
}

int list(void){
    if (QTD == 0)
    printf("A fila está vazia!\n\n");
    else
    {
        for (I = 0; I < QTD-1; I++)
            printf("Posicao %d --> %d\n\n", I,dado[I]);
    }
    return 0;
}

int menu(void){
    system("cls");
    printf("==========================\n");
    printf("===========PILHA==========\n");
    printf("==========================\n");
    printf("       1 - Inserir        \n");
    printf("       2 - Remover        \n");
    printf("       3 - Exibir         \n");
    printf("       4 - Sair           \n");
    printf("Selecione a sua opcao: ");
    scanf("%d", &OP);
    system("cls");
    
    switch(OP){
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: list();
                break;                                
    }
    return 0;
}

int main(void)
{
    QTD = 0;
    while (OP!=4)
    {
        menu();
        system("pause");
    }
    return 0;
}

