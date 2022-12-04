#include<stdio.h>
 
int main()
{
   int t,i,j,k;
   scanf("%d",&t);
   int n[t];
 
   for(i=0;i<t;i++)
    scanf("%d",&n[i]);
 
   for(i=0;i<t;i++)
   {
       if(n[i]%4==0)
        printf("\nYES");
       else printf("\nNO");
   }
}