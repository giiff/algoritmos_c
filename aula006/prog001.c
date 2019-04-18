#include <stdio.h>
//prototipo da funcao
int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);
int somar(int a, int b){
	return a+b;
}
int subtrair(int a, int b){
	return a-b;
}
int multiplicar(int a, int b){
	return a*b;
}
int dividir(int a, int b){
	if (b != 0 && a>=b){
		return a/b;
	}
	else{
		return 0;
	}
}
//Funcao principal MAIN
void main(){
	int resultado = dividir(1,2);
	printf("Resultado: %d\n", resultado);
}