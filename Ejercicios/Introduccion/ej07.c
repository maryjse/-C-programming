#include <stdio.h>

int es_par(int num) {
    if (num%2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main() {
    printf("Tu numero es par si arroja 0, impar si arroja 1. %d\n", es_par(43));
    return 0;
}

