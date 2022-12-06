long matriz[4][4], menor;
int i, j, pos_i, pos_j;
for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  {
    if(j==0 && i==0) //primeiro laço
    {
      menor=matriz[i][j];
      pos_i=i; //atualizando as posições
      pos_j=j;
    }
    else //outros laços
    {
      if(matriz[i][j]<menor)
      {
        menor=matriz[i][j];
        pos_i=i; //atualizando as posições
        pos_j=j;
      }
    }
  }
}
