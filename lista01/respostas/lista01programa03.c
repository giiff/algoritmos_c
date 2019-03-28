/*
 * Fazer um programa que leia o número de alunos de uma sala de aula, o número de salas e calcule
a quantidade de alunos na escola.
 */

#include <stdio.h>

void main() {
    printf("Informe a quantidade de salas: ");
    int qtdSalas, qtdTotalAlunos;
    scanf("%d", &qtdSalas);
    for (int cont = 1; cont <= qtdSalas; cont++) {
        printf("Informe a quantidade de alunos na sala %d: ", cont);
        int qtdAlunosSala;
        scanf("%d", &qtdAlunosSala);
        qtdTotalAlunos += qtdAlunosSala;
    }
    printf("Total de alunos na escola: %d\n", qtdTotalAlunos);
}

