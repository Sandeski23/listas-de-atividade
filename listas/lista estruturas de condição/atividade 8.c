#include<stdio.h>

#include<locale.h>

main()

{

setlocale(LC_ALL,"");

int i, n, a = 0;

float media;

for(i = 0; i < 10; i ++)

{

 printf("INFORME O %d� N�MERO: ", i + 1);

 scanf("%d", &n);



 a = a + n;

}

printf("Total: %d\n", a);

media = a / 10;

printf("M�dia: %.2f\n", media);

}
