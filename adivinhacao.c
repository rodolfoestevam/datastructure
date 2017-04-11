#include <stdio.h>
//define constantes, coisas que nunca mudam, evitem numeros magicos

int main() {
    printf("************************************\n");
    printf("* Bem vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");

    int numerosecreto = 42; 
    
    int chute;
    int tentativas = 1;

    int pontos = 1000;

    while(1) {

	   	printf("Tentativa %d\n", tentativas);
	    printf("Qual o seu chute? ");

	    scanf("%d", &chute);
	    printf("Seu chute foi %d\n", chute);

	    if(chute < 0) {
	    	printf("Voce nao pode chutar numeros negativos!\n");
	    	continue;
	    }

	    //var local
	    int acertou = (chute == numerosecreto);
	    int maior = chute > numerosecreto;

	   	 if(acertou){
	    	printf("Parabéns! Voce acertou!\n");
	    	printf("Jogue de novo, vc é um ótimo jogador!\n");
	    	
	    	break;
	    } 
	    	//variavel local, cond true = 1
	    	
	    	else if(maior) {
	    		printf("Seu chute foi maior que o numero secreto\n");
    		}

    		else {   	
				printf("Seu chute foi menor do que o número secreto!\n");
			}
				tentativas++;

				int pontosperdidos = (chute - numerosecreto) / 2; 
				pontos = pontos - pontosperdidos;
	   }

   		printf("Fim de jogo.\n");
   		printf("Voce acertou em %d tentativas!\n", tentativas);
   		printf("Total de pontos %d\n", pontos);
    
   }


