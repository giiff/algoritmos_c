/*
 * gcc lista01programa04.c -o lista01programa04 -lm
 * Desenvolver um algoritmo que leia coeficientes a, b e c de uma equação do segundo grau e calculee
imprima suas raı́zes, quando possı́vel.
 */

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Informe o coeficiente a: ");
    scanf("%f", &a);
    printf("Informe o coeficiente b: ");
    scanf("%f", &b);
    printf("Informe o coeficiente c: ");
    scanf("%f", &c);
    printf("Equação: %'.1fx² + %'.1fx + %'.1f\n", a,b,c);
    delta = (pow(b,2)) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    if (delta == 0) {
        printf("Raíz única:\n    x1 = %'.1f\n", x1);
    } else if (delta > 0) {
        printf("Raízes:\n   x1 = %'.1f\n   x2 = %'.1f\n", x1, x2);
    } else {
        printf("Função não possui raiz real\n");
    }
}
