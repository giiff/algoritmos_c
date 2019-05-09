#include <stdio.h>
#include <string.h>
void main(){
	
	char a[20];
	printf("Nome...: ");
	fgets(a, sizeof(a), stdin);// \0
	printf(a);

	char b[20];
    printf("Nome...: ");
    scanf("%s", b);
    scanf("%[^\n]%*c",b);
    printf("Nome: %s\n", b);

    printf("Tamanho da string a = %ld \n",strlen(a));
    printf("Tamanho da string b = %ld \n",strlen(b));

}