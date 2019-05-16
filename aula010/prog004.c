#include <stdio.h>

void trocarSemPonteiro (int i, int j) { 
   int temp;
   temp = i;
   i = j; 
   j = temp;
}

void trocarComPonteiro (int* i, int* j){
	int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

void main(){
	int i = 3;
	int j = 2;
	printf("i = %d\n", i);
	printf("j = %d\n", j);
	trocarSemPonteiro(i, j);
	printf("trocar sem ponteiro\n");
	printf("i = %d\n", i);
	printf("j = %d\n", j);
	trocarComPonteiro(&i, &j);
	printf("trocar com ponteiro\n");
	printf("i = %d\n", i);
	printf("j = %d\n", j);
}