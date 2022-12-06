#include <stdio.h>

#include <stdlib.h>

main(){

int vet[6],i;

for(i=0; i<6; i++){

printf(" Entre com um numero: "); // Lê os valores

scanf("%d",&vet);

}

for(i=6; i>0; i--){ // Imprime na ordem inversa

printf("\n Ordem Inversa: %d",&vet);

}

system("pause>>null");

}


