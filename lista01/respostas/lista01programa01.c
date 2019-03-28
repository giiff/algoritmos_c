/*
 * Fazer um programa que leia um número inteiro e verifique se é divisı́vel simultaneamente por 3 e 5
 */

#include <stdio.h>

void main() {
    printf("Informe um número interio: ");
    int numero;
    scanf("%d", &numero);
    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("%d é divisível por 3 e 5\n", numero);
    }
    else{
        printf("%d é NÃO divisível por 3 e 5\n", numero);
    }
}

