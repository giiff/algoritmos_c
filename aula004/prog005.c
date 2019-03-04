#include <stdio.h>
// Programa que verifica o estado civil usando switch
// Não verifica multiplos statments em um unico case
void main() {
    char marital_status;
    printf("Possible marital status:\n single (S)\n married (M)\n separated (R)\n divorced (D)\n widowed (W)\n\n");
    printf("Inform your marital status: ");
    scanf("%c", &marital_status);
    switch (marital_status) {
        case 'S': printf("single\n");
        case 'M': printf("married\n");
        case 'R': printf("separated\n");
        case 'D': printf("divorced\n");
        case 'W': printf("widowed\n");
        default: printf("Unrecognized marital status\n");
    }
}
