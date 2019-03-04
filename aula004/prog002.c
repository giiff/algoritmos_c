#include <stdio.h>
//Programa que verifica se um número informado pelo usuário é positivo e maior que 10
void main() {
    int x;
    printf("Give a number: ");
    scanf("%d", &x);
    
//    if (x>=0){
//        if (x>10){
//            printf("%d is a positive number greater than 10.\n", x);
//        }
//        printf("%d is a positive number.\n", x);
//    }
//    else{
//        printf("%d is a negative number.\n", x);
//    }
    
    if (x>=0 && x>10){
        printf("%d is a positive number greater than 10.\n", x);
    }
    else if (x>=0 && x<=10){
        printf("%d is a positive number less or equal than 10.\n", x);
    }
    else{
        printf("%d is a negative number.\n", x);
    }
}
