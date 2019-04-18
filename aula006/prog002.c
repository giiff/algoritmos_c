#include <stdio.h>
void trocarV(int a, int b);
void trocarV(int a, int b){
	int temp=a;
	a = b;
	b=temp;
	printf("Valores trocados dentro da função\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);	
	printf("-----------------\n");	
	return;
}
void trocarR(int *a, int *b);
void trocarR(int *a, int *b){
	int temp=*a;
	*a = *b;
	*b=temp;
	return;
}
void main(){
	int a = 2; int b=3;
	printf("Valores Originais\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("-----------------\n");
	trocarV(a,b);
	printf("Valores trocados com trocarV\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("-----------------\n");
	trocarR(&a,&b);
	printf("Valores trocados com trocarR\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("-----------------\n");
}