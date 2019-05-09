#include <stdio.h>
#include <string.h>
void main(){
    char a[2][100];
    printf("Informe uma string: ");
    fgets(a[0], sizeof(a[0]), stdin);
    printf("Informe uma string: ");
    fgets(a[1], sizeof(a[1]), stdin);

    int qtd_de_a_L0 = 0;
	int qtd_de_a_L1 = 0;
    for (int l=0; l<2; l++){
    	for(int c=0; c<99; c++){
    		if (l==0 && a[l][c] == 'a'){qtd_de_a_L0++;}
    		if (l==1 && a[l][c] == 'a'){qtd_de_a_L1++;}
    	}
    }
    if (qtd_de_a_L0 > qtd_de_a_L1){printf("linha 0 tem mais\n");}
    else if (qtd_de_a_L1 > qtd_de_a_L0){printf("linha 1 tem mais\n");}
    else{printf("linha 1 e inha 0 tem a mesma quantidade\n");}
}