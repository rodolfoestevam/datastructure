#include <stdio.h>
int main (void)
{
    float v[5], med, var; int i;
    for (i = 0; i < 5; i++)
    {
    	  printf("Informe o valor %d: ",i+1);
	  scanf("%f", &v[i]);
    }
    med = 0;
    for (i = 0; i < 5; i++)
	      med = med + v[i];
    med = med / 5;
    var = 0;
    for (i = 0; i < 5; i++)
	      var = var + (v[i] - med) * (v[i] - med);
    var = var / 5;
    printf("Media = %.1f e Variancia = %.1f \n", med, var);
    return 0;
}
