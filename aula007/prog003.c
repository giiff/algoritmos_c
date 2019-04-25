#include <stdio.h>

void main(){
	float arr[6];
	float aliquota = 0.1;
	printf("Informe o valor inicial: ");
	scanf("%f", &arr[0]);

	for(int i=1; i<6; i++){
		arr[i] = arr[0] + (arr[0]*aliquota);
		aliquota = aliquota+0.1;
	}
	for(int i=0; i<6; i++){
		printf("ARR[%d] = %'.2f \n",i,arr[i]);
	}
}