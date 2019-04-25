#include <stdio.h>

void main(){
	int a[10];
	for( int i=0; i < 10; i++ ){
		printf("Valor da posicao %d:",i);
		scanf("%d", &a[i]);
	}
	for( int i=0; i < 10; i++ ){
		printf("Posicao %d, Valor %d\n", i, a[i]);
	}
}