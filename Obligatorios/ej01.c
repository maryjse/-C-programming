#include <stdio.h>
#include <math.h>

#define DT 0.001
#define M 0.5
#define K 10
#define X0 10

double calcular_posicion(double xim1, double xim2, double dt, double k, double m) {
    double posicion_actual = ((2 * xim1) - xim2) / (1 + k/m * pow(dt, 2));
    return posicion_actual;
}

int main() {
    double t = 0;
    double xim1 = X0;
    double xim2 = X0;

    while (t <= 10) {
        double posicion_actual = calcular_posicion(xim1, xim2, DT, K, M);
        xim2 = xim1;
        xim1 = posicion_actual;
        t = t + DT;
        printf("%f,%f\n", t, posicion_actual);
    }
    return 0;
}
