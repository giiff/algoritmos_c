#include <stdio.h>
//Suponha que queiramos somar 5 + 4 + 3 + 2 + 1;
//Há um padrão: tomando n=5, temos n + (n-1) + (n-2) + (n-3) + (n-4)
//Podemos definir uma função que tenha esse padrão
// somar(int n)
// se chamarmos a função novamente dentro dela mesma, temos a recursividade
int somar(int n) {
    if (n > 0) return ( n + somar(n - 1));
    else return n;
}
void main(){
	int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    printf("Soma: %d\n", somar(n));
}