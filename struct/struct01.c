#include <stdio.h>

int main(void){
    struct horario 
    {
        int hora;
        int minuto;
        int segundo;
    } horario;

    struct horario inicio;

    inicio.hora = 8;
    inicio.minuto = 10;
    inicio.segundo = 20;

    printf("Inicio: %i: %i: %i\n", inicio.hora, inicio.minuto, inicio.segundo);
    getchar();

    return 0;
}