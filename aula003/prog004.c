#include <stdio.h>

void main() {
    // Relational operators
    // == equal to
    // >  greater than
    // >=  greater or equal to
    // <  less than
    // <= less or equal than
    // != different to
    int a = 2, b = 3;
    if (a == b) {
        printf("%d = %d\n", a, b);
    }

    if (a >= b) {
        printf("%d >= %d\n", a, b);
    }

    if (a > b) {
        printf("%d >%d\n", a, b);
    }

    if (a < b) {
        printf("%d < %d\n", a, b);
    }

    if (a <= b) {
        printf("%d <= %d\n", a, b);
    }

    if (a != b) {
        printf("%d <> %d\n", a, b);
    }

}
