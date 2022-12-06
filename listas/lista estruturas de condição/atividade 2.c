#include <stdio.h>#include <stdlib.h>
int main(){
    int i;
    int auxiliar =1 ;

    while( auxiliar ) {
        printf("Digite um número qualquer ou 0 para terminar");
        scanf("%d", &auxiliar);
        printf("Usuário digitou %d \n",auxiliar);
        if (auxiliar) {
            for (i=auxiliar;i>=0;i--){
              printf("E lá vai o número %i \n",i);
            };
        }
        else {
             printf("entrada terminada pelo usuário \n");
        }

    };

}
