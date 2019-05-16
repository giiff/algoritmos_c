#include <stdio.h>
void main(){
   int* ponteiro;//declaracao de ponteiro
   int var; //declaracao de vaiavel
   var = 20;//var recebe 20
   ponteiro = &var;//ponteiro recebe endereco de memoria
   printf("var \t &var \t\t ponteiro \t*ponteiro \n");
   printf("%d \t %u \t %u \t %d \n\n", var, &var, ponteiro, *ponteiro);
}