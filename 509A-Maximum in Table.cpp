#include<stdio.h>
 
int main()
{
   int t,i,j,k;
   scanf("%d",&t);
   int arr[t][t];
 
   // defining all 1
   for(i=0;i<t;i++)
   {
       arr[0][i]=1;
       arr[i][0]=1;
   }
 
   for(i=1;i<t;i++)
   {
       for(j=1;j<t;j++)
        arr[i][j]=arr[i][j-1]+arr[i-1][j];
   }
 
 
 
   printf("\n%d",arr[t-1][t-1]);
}