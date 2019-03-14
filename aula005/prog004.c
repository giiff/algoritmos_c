#include <stdio.h>

void main() {
    for (int v = 0; v <= 100; v++) {
        if (v % 2 == 0) {
            printf("%d é PAR\n", v);
        } else {
            printf("%d é IMPAR\n", v);
        }
    }
}