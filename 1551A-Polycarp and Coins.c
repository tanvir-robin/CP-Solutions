#include<stdio.h>
#include<string.h>
 
 
int main()
{
   int t,n,i,c1,c2;
   scanf("%d",&t);
   int amount[t];
 
   //taking input
   for(i=0;i<t;i++)
    scanf("%d",&amount[i]);
 
   //processing
   for(i=0;i<t;i++)
   {
       c1=c2=amount[i]/3;
       if(amount[i]%3==1)
        c1++;
       else if(amount[i]%3==2)
        c2++;
       printf("\n%d %d",c1,c2);
   }
}