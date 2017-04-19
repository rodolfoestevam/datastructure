    #include <stdio.h>

    int main()
    {
          float sal[13];
          float total;
          int i;
          for( i = 1; i<=12; i++)
          {
                printf("Informe o salário do mes %d: ", i );
                scanf("%f", &sal[i]);
          }
          puts(" mes                   valor ");
          for( i = 1, total= 0.0; i<=12; i++)
          {
            printf("%3d             %9.2f\n", i, sal [i]);
            total += sal [i];
          }
      printf("Total Anual: %9.2f\n", total);
    }
