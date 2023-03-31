#include <stdio.h>

void fichas_de_domino() {
    int blancas = 0;
    int negras = 0;
    while (blancas <= 6)
    {
        negras = 0;
        while (negras < 6)
        {
            negras++;
            printf("Las fichas de domino son: %d %d\n", blancas, negras);
        }
    blancas++;
    }
}

int main()
{
    fichas_de_domino();
    return 0;
}
