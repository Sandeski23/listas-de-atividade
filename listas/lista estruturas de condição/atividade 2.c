#include <stdio.h>#include <stdlib.h>
int main(){
    int i;
    int auxiliar =1 ;

    while( auxiliar ) {
        printf("Digite um n�mero qualquer ou 0 para terminar");
        scanf("%d", &auxiliar);
        printf("Usu�rio digitou %d \n",auxiliar);
        if (auxiliar) {
            for (i=auxiliar;i>=0;i--){
              printf("E l� vai o n�mero %i \n",i);
            };
        }
        else {
             printf("entrada terminada pelo usu�rio \n");
        }

    };

}
