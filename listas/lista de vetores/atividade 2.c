#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, num[6];
   printf("Digite 6 numeros inteiros.\n");
   for(i=0; i<6; i++) {
        printf("Digite o %d valor: ", (i+1));
    scanf("%d", &num[i]);
   }
   system("cls");
   for(i=0; i<6; i++) {

   system("pause");
   return 0;
}
