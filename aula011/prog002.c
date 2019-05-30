=#include <stdio.h>
// Fatorial recursivo
double fatorial(int n){
	if ( n <= 1 )//Caso base: fatorial de n <= 1 retorna 1
		return (1);
	else return n * fatorial(n - 1);
}

void main(){
	int numero;
	double f;
	printf("Digite um número não negativo: ");
	scanf("%d",&numero);
	f = fatorial(numero);
	printf("Fatorial de %d = %.0lf\n",numero,f);
}