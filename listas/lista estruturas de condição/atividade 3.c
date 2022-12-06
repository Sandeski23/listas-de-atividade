#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int n,imp;

    printf("Digite um número:\n");
    scanf("%d",&n);
    if(n!=0){//para Zero n ser considerado par
        if(n%2!=0){
            while(imp<n){
                imp=n+2;

                printf("%d",imp);
            }



        }
    }

    return 0;
}
