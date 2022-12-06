#include <stdlib.h>

#include <stdio.h>

int main(){

int matriz_A[5][5], matriz_B[5][5], i, j;

//matriz_A

for(i = 0; i < 5; ++i){

 for(j = 0; j < 5; ++j){

   printf("matriz_A[%d][%d]: ", i, j);

   scanf("%d", &matriz_A[i][j]);

 }

}

printf("\n");

//matriz_B

 for(i = 0; i < 5; ++i){

  for(j = 0; j < 5; ++j){

    matriz_B[i][j] = 2 * matriz_A[i][j];

    printf("%d\t", matriz_B[i][j]);

     if(j==4) printf("\n");

  }

 }

return 0;

}
