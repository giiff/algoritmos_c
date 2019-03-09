#include <stdio.h>
void main() {
    int lados;
    float base, altura, area;
    base = altura = area = 0;
    printf("Informe a quantidade de lados do poligono (3 ou 4): ");
    scanf("%d", &lados);
    if (lados == 3) {
        printf("Informe a base do triangulo: ");
        scanf("%f", &base);
        printf("Informe a altura do triangulo: ");
        scanf("%f", &altura);
        area = base * altura / 2;
    } else if (lados == 4) {
        printf("Informe a base do quadrilatero: ");
        scanf("%f", &base);
        printf("Informe a altura do quadrilatero: ");
        scanf("%f", &altura);
        area = base * altura;
    } else {
        printf("Quantidade de lados invalida \n");
    }
    printf("A area e igual a: %2f \n",area);
}