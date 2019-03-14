#include <stdio.h>

void main() {
    int continuar = 1;
    float salariosAcumulados = 0;
    float salarioDigitado = 0;
    int qtd_salarios;
    while (continuar) {
        printf("Informe o salário R$ ");
        scanf("%f", &salarioDigitado);
        salariosAcumulados = salariosAcumulados + salarioDigitado;
        qtd_salarios++;
        printf("Continuar? Sim = 1 / Não = 0: ");
        scanf("%d", &continuar);
    }
    printf("Valor acumulado %2f", salariosAcumulados);
    printf("A média salarial é R$ %2f", salariosAcumulados / qtd_salarios);
    printf("\n");
}