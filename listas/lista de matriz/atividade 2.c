#include <stdio.h>

int main()

{

   int matriz[4][4] = {

       10, 20, 30, 40,

       50, 20, 90, 10,

       500, 20, 30, 50,

       10, 90, 90, 90

   };

   int localizacao_x = 0;

   int localizacao_y = 0;

   int maior_item = matriz[0][0];

   for(int x = 0; x < 4; x++){

       for(int y = 0; y < 4; y++){

           if(matriz[x][y] > maior_item){

               localizacao_x = x;

               localizacao_y = y;

               maior_item = matriz[x][y];

           }

       }

   }



   printf("Maior item se encontra em Matriz[%d][%d]\n", localizacao_x + 1, localizacao_y + 1);



   return 0;

}2
