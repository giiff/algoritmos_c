#include <stdio.h>
int main() {
    char tipoConsumo;
    float consumo;
    float conta;
    printf("TIPOS DE CONSUMO\n");
    printf("\tR = residencial\n");
    printf("\tC = comercial\n");
    printf("\tI = industrial\n");
    printf("Informe o tipo de consumo..: ");
    scanf("%c",&tipoConsumo);
    if ( tipoConsumo == 'R' || tipoConsumo == 'r' ){
        printf("Informe o consumo em m³..: ");
        scanf("%f",&consumo);
        conta = 5 + consumo * 0.05;
    }
    else if ( tipoConsumo == 'C' || tipoConsumo == 'c' ){
        printf("Informe o consumo em m³..: ");
        scanf("%f",&consumo);
        if (consumo <=80){
            conta = 500;
        }
        else{
        conta = 500 + consumo * 0.25;
        }
    }
    else if ( tipoConsumo == 'I' || tipoConsumo == 'i' ){
        printf("Informe o consumo em m³..: ");
        scanf("%f",&consumo);
        if (consumo <=100){
            conta = 800;
        }
        else{
        conta = 800 + consumo * 0.04;
        }
    }
    printf ("Sua conta é de R$ %'.2f por %'.1f m³ de água\n", conta, consumo);
}
