          #include <stdio.h>
          #include <stdlib.h>
          struct s_dados
          {
            char nome[20];
          };
          int main()
          {
                int i, quantidade;
                printf("Quantidade registros : " );
                scanf("%d", &quantidade);
                struct s_dados dados [quantidade];
                for (i =0; i < quantidade; i++)
            {
                printf("Nome : ");
                scanf(" %20[^\n]", &dados[i].nome);
            };
                system("CLS");
            for (i = 0; i < quantidade; i++) {
              printf("Nome: %s\n",  dados[i].nome);
              system("PAUSE");
            return 0;
          }
          
