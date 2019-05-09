#include <stdio.h>
#include <string.h>
void main(){
    char cadastro[3][100];
    printf("Nome do pai: ");
    fgets(cadastro[0], sizeof(cadastro[0]), stdin);
    printf("Nome do mãe: ");
    scanf("%[^\n]%*c",cadastro[1]);
    printf("Nome do dependente: ");
    scanf("%[^\n]%*c",cadastro[2]);
    
    printf("Beneficiários:\n");
    for(int i=0; i<3; i++){
    	printf("%s\n", cadastro[i]);
    }
}