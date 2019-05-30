#include <stdio.h>
// maiorRecursivo elemento de um vetor
int maiorRecursivo(int* array, int tamanho);
int maior(int n1, int n2);

int maiorRecursivo(int* array, int tamanho){
  if (tamanho == 1) return array[0];
  return maior(maiorRecursivo(array, tamanho - 1), array[tamanho - 1]);
}
 
int maior(int n1, int n2){
  return n1 > n2 ? n1 : n2;
}

void main(){
  int array[] = {10, 5, 7, 9, 15, 15, 11, 8, 12, 2,};
  int maiorRecursivoValor = maiorRecursivo(array, 10);
  printf("Maior elemento do vetor: %d\n", maiorRecursivoValor);
}