#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int x = 0,n = 0;

    printf("Informe um valor para definir um ponto de partida: ");
    scanf("%d", &x);
    printf("Informe um valor para condicao de parada: ");
    scanf("%d", &n);

    for(x = 0 ; x == n ; x++){

        printf("_%d_",x);
    }

    return 0;
}
