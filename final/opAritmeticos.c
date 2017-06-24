#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int x = 10, y = 3;
    float z = 2.5;

    printf("%d * %d        =       %d\n", x, y, x * y);
    printf("%d / %d        =       %d\n", x, y, x / y);
    printf("%d + %d        =       %d\n", x, y, x + y);
    printf("%d - %d        =       %d\n", x, y, x - y);

    printf("%d %% %d        =       %d\n", x, y, x % y);

    printf("fmod(%d, %.1f) = %.1f\n", x, z, fmod(x, z));
    printf("pow(%d,2) = %.f\n", x, pow(x, 2));
    printf("\n");
    system("pause");

    return 0;
}
