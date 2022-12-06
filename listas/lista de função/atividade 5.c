#include <stdio.h>

void exclamacao(int num){

int i, j;

//enquanto i for menor ou igual que o numero passado

for(i = 1; i<=num; i++){

//repara que meu J começa com ZERO, e o i começa com 1.

//porque a primeira linha, vai ter que imprimir um numero, certo ?

// se os dois começassem com zero, nao ia dar certo.

//Quando o i chega no final, o J chega depois.

 for(j = 0; j<i; j++){

  printf("!");

 }

//tem que haver essa quebra de linha EXATAMENTE AQUI. Ela estando

//aqui, significa que DEPOIS DE IMPRIMIR a exclamação em uma linha, ele

//quebra a linha.

 printf("\n");

}

}

int main(){

int num;

printf("Informe o valor: \n");

scanf("%d", &num);

exclamacao(num);

return 0;

}
