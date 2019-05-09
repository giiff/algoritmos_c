#include <stdio.h>
#include <string.h>
void main(){
    char a[20];

    printf("Informe uma string: ");
    scanf("%[^\n]%*c",a);

    printf("String: %s\n", a);
    printf("Tamanho da string a = %d \n",strlen(a));

// Informe uma string: abc def
// String: abc def
// Tamanho da string a = 7 
}