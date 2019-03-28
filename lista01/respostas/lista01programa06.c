#include <stdio.h>
void main() {
    int n1, n2, n3;
    printf("1º numero inteiro: ");
    scanf("%d", &n1);
    printf("2º numero inteiro: ");
    scanf("%d", &n2);
    printf("3º numero inteiro: ");
    scanf("%d", &n3);
    if (n1 > n2 && n1 > n3) {
        printf("%d é o maior número\n", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("%d é o maior número\n", n2);
    } else if (n3 > n1 && n3 > n2) {
        printf("%d é o maior número\n", n3);
    } else {
        printf("Não determinável\n");
    }
}

