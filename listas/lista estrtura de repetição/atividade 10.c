#include <stdio.h>
#include <conio.h>
int main(){
    /*Declara��o de vari�veis*/
    int a=0,i,j,w,flag;
    int vetor[10],iguais[10];/* a=0 ent�o esse vetor n�o teria nenhuma posi��o , erro ! */
    /*Entrada*/
    for(i=0;i<10;i++){
        printf("Entre com o elemento[ %d ] : ",i+1);
        scanf("%d",&vetor[i]);
    }
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            /*if(j==i){
                continue;  /* n�o precisa desse trecho */
            /*}
            else */
            flag=0;
            if(vetor[i]==vetor[j] && i != j){
                for(w=0; w<10; w++){
                    if(iguais[w] == vetor[j])/* se o numero j� estiver nesse vetor de iguais */
                        flag=1;
                }
                if(flag==0){
                    iguais[a]=vetor[i];/* para escrever o numero apenas uma vez */
                    a++;
                }
                /*break;    nem desse break */
            }
        }
     }
     for(i=0; i<a; i++){
        printf("%d ",iguais[i]);
     }
     getch();
     return 0;
}
