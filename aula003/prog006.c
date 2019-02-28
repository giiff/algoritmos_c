#include <stdio.h>

void main() {
    float salario;
    float salarioFinal;
    printf("Informe seu salário: R$ ");
    scanf("%f", &salario);
    if (salario <= 1000) {
        salarioFinal = salario - (salario * 12 / 100);
    }
    if (salario>1000 && salario<=5000){
        salarioFinal = salario - (salario * 14 / 100);
    }
    if (salario>5000 && salario<=20000){
        salarioFinal = salario - (salario * 17 / 100);
    }
    if (salario > 20000) {
        salarioFinal = salario - (salario * 25 / 100);
    }
    printf("O salário final é R$ %'.2f \n", salarioFinal);
}
