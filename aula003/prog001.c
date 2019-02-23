#include <stdio.h>
#include <stdbool.h>

void main() {
    //Tipos de variáveis
    short int n1 = 10;
    int n2 = 10;
    long int n3 = 10;
    float n4 = 10.5;
    double n5 = 10.5;
    double n6 = 1E6;
    char a1 = 'A';
    bool b1 = false;
    printf("Size of short int n1 (%d): %d\n", n1, sizeof (n1));
    printf("Size of int n2 (%d): %d\n", n2, sizeof (n2));
    printf("Size of long int n3 (%d): %d\n", n3, sizeof (n3));
    printf("Size of float n4 (%f): %d\n", n4, sizeof (n4));
    printf("Size of double n5 (%f): %d\n", n5, sizeof (n5));
    printf("Size of double n6 (1E6 or %f): %d\n", n6, sizeof (n6));
    printf("Size of char a1 (\"%c\"): %d\n", a1, sizeof (a1));
    printf("Size of boolean b1 (%d): %d\n", b1, sizeof (b1));

}
