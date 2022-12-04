#include<stdio.h>
 
 
int main()
{
   int n,j,i, res;
   scanf("%d", &n);
   int in[n][2];
 
   for(i=0; i<n; i++)
   {
       scanf("%d %d", &in[i][0], &in[i][1]);
   }
 
   for(i=0; i<n; i++)
   {
       j = abs(in[i][0]-in[i][1]);
       if(j%10!=0)
       res = (j/10)+1;
       else
        res = j/10;
       printf("\n%d", res);
   }
 
 
 
}