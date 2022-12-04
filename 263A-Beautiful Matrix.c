#include<stdio.h>
 
int main()
{
  int mat[10][10],n,i,j,k;
 
 
  for(i=1; i<=5; i++)
  {
      for(j=1; j<=5; j++)
        scanf("%d", &mat[i][j]);
  }
 
   for(i=1; i<=5; i++)
  {
      for(j=1; j<=5; j++)
       {
           if(mat[i][j]==1)
           {
               printf("%d", abs(i-3)+abs(j-3));
               break;
           }
       }
  }
 
 
}