#include <stdio.h>

void main(){
	int arr[10];
	arr[0] = 1;
	for( int pos=1; pos<10; pos++ ){
		arr[pos] = arr[pos-1]*2;
	}
	for( int pos=0; pos<10; pos++ ){
		printf("ARR[%d] = %d\n",pos,arr[pos]);
	}

}