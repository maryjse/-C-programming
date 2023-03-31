#include <stdio.h>
#include <math.h>

float const PI = 3.14159265359;
float radio = 2.5;
float altura = 5.4;

float calc_diametro(float radio) {
    return 2 * radio;
}

float circunferencia(float diametro) {
    return PI * diametro;
}

float calc_area(float diametro) {
    return pow(diametro/2, 2);
}

float volumen(float area, float altura){
    return area * altura;
}

float superficie(float radio, float altura) {
    return ((2*PI*radio*altura)+(2*PI*pow(radio,2)));
}

int main()
{
    float diametro = calc_diametro(radio);
    float area = calc_area(diametro);
    printf("El diametro es: %f\nLa circunferencia es: %f\nEl area es: %f\nEl volumen es: %f\nLa superficie es: %f\n", diametro, circunferencia(diametro), area, volumen(area, altura), superficie(radio, altura));
    return 0;
}
