#include <stdio.h>

   int main(){

      int tamPar, tamImpar, i, vetDigitado[10],vetPar[10],vetImpar[10];
        tamPar=0;
        tamImpar=0;

        for(i=0;i<10;i++){
            printf("\nDigite o %d.o numero: ", i+1);
            scanf("%d%*c", &vetDigitado[i]);

               if(vetDigitado[i] % 2 == 0){
                 vetPar[i]=vetDigitado[i];
                 tamPar++;
                 }

             else{
               vetImpar[i]=vetDigitado[i];
               tamImpar++;
               }
          }

           for(i=0; i<tamPar; i++){
            printf("\nVetor Par: %d \n", vetPar[i]);
           }
           for(i=0; i<tamImpar; i++){
            printf("\nVetor Impar: %d \n", vetImpar[i]);
           }
    return 0;
  }
