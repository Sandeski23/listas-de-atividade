#include <stdio.h>

int main(){

int n, i, a = 0;

float m = 0;

printf("Digite 10 n�meros inteiros positivos: ");

for (i = 1; i <= 10; i++){

printf("\n%d ", i);

scanf("%d", &n);

while(n<=0){

printf("Numero nao positivo. \n%d ", i);

scanf("%d", &n);

}

a = a+n;

}

m = a/10;

printf("\n media dos numeros %f", m);

return 0;

}
