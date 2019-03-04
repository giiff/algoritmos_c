#include <stdio.h>
// Programa que informa desconto aplicado de acordo com a profissao e idade
// Professor = 40% de desconto
// Estudante = 20%
// idade: 0-20 anos = 20%; 21-40 = 15%; 41-~ = 10%;

void main() {
    char profession;
    int age;
    printf(" (P) Professor    (S) Student ");
    printf("Inform your profession: ");
    scanf("%c", &profession);
    printf("Inform your age: ");
    scanf("%d", &age);
    //Usa parenteses por causa da precedencia de operadres
    if ((profession == 'P' || profession == 'p') && age < 21) {
        printf("You are eligible for 60%% off\n");
    }
    if ((profession == 'S' || profession == 's') && age < 21) {
        printf("You are eligible for 40%% off\n");
    }
    if ((profession == 'P' || profession == 'p') && age >= 21 && age < 40) {
        printf("You are eligible for 55%% off\n");
    }
    if ((profession == 'S' || profession == 's') && age >= 21 && age < 40) {
        printf("You are eligible for 35%% off\n");
    }
    if ((profession == 'P' || profession == 'p') && age >= 41) {
        printf("You are eligible for 50%% off\n");
    }
    if ((profession == 'S' || profession == 's') && age >= 41) {
        printf("You are eligible for 30%% off\n");
    }
}
