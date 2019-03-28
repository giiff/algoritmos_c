/*
 * Fazer um programa que leia 4 números inteiros e realize a soma dos 3 maiores.
 */
#include <stdio.h>

void main() {
    int n1, n2, n3, n4, soma;
    printf("1º numero inteiro: ");
    scanf("%d", &n1);
    printf("2º numero inteiro: ");
    scanf("%d", &n2);
    printf("3º numero inteiro: ");
    scanf("%d", &n3);
    printf("4º numero inteiro: ");
    scanf("%d", &n4);
    if (n1 < n2 && n1 < n3 && n1 < n4) {
        soma = n2 + n3 + n4;
    }
    else if (n2 < n1 && n2 < n3 && n2 < n4){
        soma = n1 + n3 + n4;
    }
    else if (n3 < n1 && n3 < n2 && n3 < n4){
        soma = n1 + n2 + n4;
    }
    else if (n4 < n1 && n4 < n2 && n4 < n3){
        soma = n1 + n2 + n3;
    }
    else{
        printf("Impossível determinar os 3 maiores\n");
    }
    printf("A soma dos 3 maiores é %d\n", soma);
}

