#include <stdio.h>

int multiplo_de_diez(int num) {
    int multiplo = num % 10;
    return num - multiplo;
}
int main()
{
    printf("El numero es: %d\n", multiplo_de_diez(153));
    return 0;
}
