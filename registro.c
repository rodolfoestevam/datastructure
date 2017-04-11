#include <stdio.h>
int main(int argc, char const *argv[]) {
  struct horario {
    int hora;
    int minuto;
    int segundo;
  };

struct horario inicio;
inicio.hora = 8;
inicio.minuto =10;
inicio.segundo = 20;
printf("Inicio: %i %i %i\n", inicio.hora, inicio.minuto, inicio.segundo );
getchar();

  return 0;
}
