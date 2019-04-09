#include <stdio.h>
void main(){
	printf(" _           _   _                  _____       _ _       _       \n");
	printf("| |         | | | |                /  __ \\     | | |     | |      \n");
	printf("| |     ___ | |_| |__   __ _ _ __  | /  \\/ ___ | | | __ _| |_ ____\n");
	printf("| |    / _ \\| __| '_ \\ / _` | '__| | |    / _ \\| | |/ _` | __|_  /\n");
	printf("| |___| (_) | |_| | | | (_| | |    | \\__/\\ (_) | | | (_| | |_ / / \n");
	printf("\\_____/\\___/ \\__|_| |_|\\__,_|_|     \\____/\\___/|_|_|\\__,_|\\__/___|\n");

	printf("Informe um número inteiro: "); 
	int n; scanf("%d", &n);
	printf("%d", n);
	while ( n != 1 ){
		if (n%2 == 0){
			n = n/2;
			printf("\t%d", n);
		}
		else{
			n = n*3+1;
			printf("\t%d", n);
		}
	}
	printf("\n");
}









                                                                  
                                                                  
