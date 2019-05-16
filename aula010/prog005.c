#include <stdio.h>

void trocar (int* i, int* j, int* k){
    *k = *i;
    *i = *j;
    *j = *k;
}

void main(){
	int array[3] = {2,3,0};
	printf("array[0] = %d\n", array[0]);
	printf("array[1] = %d\n", array[1]);
	trocar(&array[0], &array[1], &array[2]);
	printf("trocar com ponteiro\n");
	printf("array[0] = %d\n", array[0]);
	printf("array[1] = %d\n", array[1]);
}