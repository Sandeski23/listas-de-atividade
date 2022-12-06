#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int vet[12],x,y,i,soma;
for(i=0;i<12;i++)
{
    scanf("%d",&vet[i]);
}
scanf("%d",&x);
scanf("%d",&y);
soma=vet[x]+vet[y];
printf("\n A soma é:%d",soma);
getche();
return(0);
}
