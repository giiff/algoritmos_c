#include <stdio.h>

void main() {
    printf("Informe o sexo: (M/F): ");
    char sexo;
    scanf("%c", &sexo);
    printf("Informe a altura em metros:");
    float h;
    scanf("%f", &h);
    if (sexo == 'M' || sexo == 'm') {
        printf("O peso ideal é %'.2f\n", (72.7 * h) - 58);
    } else if (sexo == 'F' || sexo == 'f') {
        printf("O peso ideal é %'.2f\n", (62.1 * h) - 44.7);
    } else {
        printf("Opção inválida\n");
    }
}