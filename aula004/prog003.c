#include <stdio.h>
//Programa que verifica se um número x é maior que y e troca os valores de x e y

void main() {
    int x, y;
    printf("Give a value for X: ");
    scanf("%d", &x);
    printf("Give a value for Y: ");
    scanf("%d", &y);
    printf("Value of X: %d\n", x);
    printf("Value of Y: %d\n", y);
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
        printf("Value of X after swap: %d\n", x);
        printf("Value of Y after swap: %d\n", y);
    } else {
        printf("%d is less or equal to %d.\n", x, y);
    }
}
