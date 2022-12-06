#include <stdio.h>

int main()

{

 int vet[100];

 for(int i = 0; i < 100;i++){

     vet[i] = 0;

 }



 for(int j = 1;j <= 100;j++){

     if(j%7 != 0 && j%10 != 7){ //j%7 verifica se é multiplo   j%10 verifica o ultimo digito

         vet[j] = j;

     }

     if(vet[j] != 0){

     printf("%d\n",vet[j]);

     }

 }

   return 0;

}
