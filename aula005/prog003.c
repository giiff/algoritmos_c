#include <stdio.h>

void main() {
    printf("1 - Todas as quintas temos aula de algoritmos!\n");
    printf("2 - Todos os boletos foram pagos!\n");
    printf("3 - O importante é o que importa!\n");
    printf("Escolha uma frase...: ");
    int frase;
    int qtd;
    scanf("%d", &frase);
    if (frase != 1 && frase != 2 && frase != 3) {
        printf("Frase inválida!\n");
    } else {
        if (frase == 1) {
            printf("Quantas vezes você quer repetir a frase? ");
            scanf("%d", &qtd);
            int cont = 0;
            while (cont < qtd) {
                printf("Todas as quintas temos aula de algoritmos!\n");
                cont++;
            }
        } else if (frase == 2) {
            printf("Quantas vezes você quer repetir a frase? ");
            scanf("%d", &qtd);
            int cont = 0;
            while (cont < qtd) {
                printf("Todos os boletos foram pagos!\n");
                cont++;
            }
        } else if (frase == 3) {
            printf("Quantas vezes você quer repetir a frase? ");
            scanf("%d", &qtd);
            int cont = 0;
            while (cont < qtd) {
                printf("O importante é o que importa!\n");
                cont++;
            }
        }
    }
}