#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
 
int main()
{
   int t,i,j,k,l,evod,tmp,count,rem,sume,sumo;
   scanf("%d",&t);
   int n[t+10];
  // taking inputs
   for(i=0;i<t;i++)
    scanf("%d",&n[i]);
 
   // processing
    for(i=0;i<t;i++)
    {
         j=n[i]/2;
    sume=sumo=evod=0;
     // sum of even number
      evod=2;
       for(k=1;k<=j;k++)
       {
           sume+=evod;
           evod+=2;
       }
   // sum of odd except last one
     evod=1;
       for(k=1;k<=j-1;k++)
       {
           sumo+=evod;
           evod+=2;
       }
    if((sume-sumo)%2!=0)
       {
           printf("\nYES\n");
 
           evod=2;
       for(k=1;k<=j;k++)
       {   printf("%d ",evod);
           evod+=2;
       }
       evod=1;
       for(k=1;k<=j-1;k++)
       {   printf("%d ",evod);
           evod+=2;
       }
           printf("%d",sume-sumo);
       }
    else printf("\nNO");
 
    }
 
}