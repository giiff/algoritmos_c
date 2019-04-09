#include <stdio.h>
 
void main(){
   int min = 1;
   int max = 100;
   int meio = max/2; 
   int n; 
   printf("Número entre 1 e 100: "); scanf("%d",&n);

   while (min <= max){
      if (n > 100 || n<1){
         max = 0;
         printf("Número fora da faixa determinada.\n");
      }
      else if (n == meio){
         max = 0;
         printf("O número informado foi: %d\n", n);
      }
      else if (n > meio){
         min = meio + 1;
      }
      else {
         max = meio -1;
      }
      meio = (max-min)/2 + min;
      printf("Limite Inferior: %d\nLimite Superior: %d\nMeio: %d\n\n", min, max, meio );
   }
 }