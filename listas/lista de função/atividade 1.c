#include <stdio.h>
int compara(int a, int b);
int main(){
 int n1, n2, res;
 printf("Digite dois valores separados por espa�o:\n");
 scanf("%d %d", &n1, &n2);

 res = compara(n1, n2);
 printf("o menor n�mero eh: %d\n", res);
 return 0;
}

int compara(int a, int b){
 if (a > b) {
 return b;
 }else{
 return a;
 }
}
