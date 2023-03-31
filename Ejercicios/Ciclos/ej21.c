#include <stdio.h>

void numero_espejo(int num) {
    while (num / 10 != 0)
    {
        int x = num / 10;
        int resto = num % 10;
        num = x;
        printf("%d", resto);
    }
        if (num/10 == 0)
    {
        int resto = num % 10;
        printf("%d\n", resto);
    }
}

int main()
{
    numero_espejo(9511);
    return 0;
}

