#include<stdio.h>
 
int main()
{
     int t,i;
   scanf("%d",&t);
   int x[t];
 
   for(i=0;i<t;i++)
    scanf("%d",&x[i]);
 
   for(i=0;i<t;i++)
   {
       printf("1 %d\n",x[i]-1);
   }
}
 
 