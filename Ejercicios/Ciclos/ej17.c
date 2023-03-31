#include <stdio.h>

float raiz_cuad(float x) {
    float y = 1.0;
    float n = y * x;
    float error = 0;
    while ((x - y) > error)
    {
        y = n/x;
        x = (x + y)/2;
    }
    return x;
}

int main()
{
    int x = 2;
    printf("La raiz cuadrada de %d es: %f\n", x, raiz_cuad(x));
    return 0;
}
