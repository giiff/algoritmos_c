#include <stdio.h>
void main(){
	int numero, unidade, dezena, centena;
	centena = 0;
	dezena = 0;
	unidade = 1;
	numero = 1;
	while ( numero <=500 ){
		centena = numero/100;
		dezena = (numero - (centena*100)) / 10;
		unidade = (numero - (centena*100)) % 10;
		//printf("Numero: %d: centena %d, dezena: %d, unidade %d\n", numero, centena, dezena, unidade);
		int test = (centena*centena*centena) +  (dezena*dezena*dezena) + (unidade*unidade*unidade);
		if ( test == numero){
			printf ("%d\n", numero);
		}
		numero++;		
	}
}