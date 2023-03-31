#include <stdio.h>

float convertir_a_celsius(float c) {
    float f = (c * 1.8) + 32;
    return f;
}

void tabla() {
    int c = 0;
    while (c <= 100)
    {
        printf("Para %d C, son F%.2f\n", c, convertir_a_celsius(c));
        c = c + 10;
    }
}

int main()
{
    tabla();
    return 0;
}

 