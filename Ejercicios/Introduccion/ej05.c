#include <stdio.h>
#include <math.h>

float modulo(float x, float y, float z) {
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

int main () {
    printf("La norma del vector es %f ", modulo(1,1,1));
    return 0;
}