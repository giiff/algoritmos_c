#include <stdio.h>
void main(){
   int x[4];
   int i;
   for(i = 0; i < 4; ++i){
      printf("&x[%d] = %u\n", i, &x[i]);
   }
   printf("Endereço do array x: %u\n", x);
}