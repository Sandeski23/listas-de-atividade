#include<stdio.h>

int main() {

int numero, maior = 0, num1[100], cont = 0;

printf("Digite quantos números serão lidos: ");

scanf("%d", &numero);

for (int i = 0; i < numero; i++) {

 printf("Digite o número: ");

 scanf("%d", &num1[i]);

 maior = num1[0];

}

for (int i = 0; i < numero; i++) {

 if (num1[i] > maior) {

  maior = num1[i]; // pega o maior numero do vetor

 }

}

for (int i = 0; i < numero; i++) {

 if (num1[i] == maior) {

  cont++;

 }

}

printf("O maior número é %d e foi lido %d", maior, cont);

return 0;

}
