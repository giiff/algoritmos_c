#include <stdio.h>
//Programa que verifica se um número informado pelo usuário é positivo ou negativo
void main() {
    int x;
    printf("Give a number: ");
    scanf("%d", &x);
    if (x>=0){
        printf("%d is a positive number.\n", x);
    }
    else{
        printf("%d is a negative number.\n", x);
    }
}
