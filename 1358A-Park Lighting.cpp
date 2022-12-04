#include<stdio.h>
 
int main()
{
   int t,i,j,k;
   scanf("%d",&t);
   int n[t],r[t];
   for(i=0;i<t;i++)
    scanf("%d %d",&n[i],&r[i]);
 
   for(i=0;i<t;i++)
   {   k=n[i]*r[i];
       if(k%2!=0)
       {
           k++;
           printf("\n%d",k/2);
       }
       else
        printf("\n%d",k/2);
   }
}