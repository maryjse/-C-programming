//Ejercicio en clase.
//Quiero una funcion que le pueda dar un vector de enteros y me diga cual es el promedio.

#include <stdio.h>

// float calcular_promedio() {

// }

int main(void) {
    float vector[] = {1, 2, 3, 4, 3.14, 7};
    size_t n = sizeof(vector) / sizeof(vector[0]);
    for (int i = 0; i < n; i++) {
        printf("%f\n", vector[i]);
    }

    return 0;
}
