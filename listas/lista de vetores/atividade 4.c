#include<stdio.h>

int main()
{
int vet1[12], x, y, b, a, soma;

for(i=0; i<12, i++)
{
printf("Digite os dados do vetor:", i+1);
scanf("%d", &vet1);
}

printf("Digite o número da 1ª posição:");
scanf("%d", &x);


printf("Digite o número da 2ª posição:");
scanf("%d", &y);

a = vet1[x];
b = vet1[y];

soma = a + b;

printf("Resultado: %d", soma);

return 0;

}
