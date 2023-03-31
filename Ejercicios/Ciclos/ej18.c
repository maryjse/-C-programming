#include <stdio.h>

int calc_factorial(int n) {
    int i = 1;
    int factorial = n;
    while (i < n)
    {
        factorial = i * factorial;
        i++;
    }
    return factorial;
}

int main()
{
    printf("El factorial de 5 es: %d\n", calc_factorial(5));
    return 0;
}
