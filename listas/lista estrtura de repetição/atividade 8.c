#include <stdio.h>

#include <stdlib.h>

int main(){

 int a[10], b[10], c[10];

 printf("Informe 10 numeros para o vetor A:\n");

 for(int i = 0; i < 10; i++){

   printf("[%i]", i+1);

   scanf("%d", &a[i]);

 }

 printf("\n");

 printf("Informe 10 numeros para o vetor B:\n");

 for(int i = 0; i < 10; i++){

   printf("[%i]", i+1);

   scanf("%d", &b[i]);

 }

 printf("\nC = A - B:\n");

 for(int i = 0; i < 10; i++){

   c[i] = a[i] - b[i];

   printf("[%i]%d\n", i+1, c[i]);

 }

return 0;

}

