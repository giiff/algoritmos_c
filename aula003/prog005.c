#include <stdio.h>

void main() {
    int ch;
    printf("Type the char 'A': ");
    scanf("%c",&ch);
    if ( ch == 'A'){
        printf("Congratulations, You did it!\n");
    }
    else{
        printf("Try again! We believe in you!\n");
    }
}
