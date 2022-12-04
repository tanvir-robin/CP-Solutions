#include<stdio.h>
#include<string.h>
 
int main()
{
  int t,i,j,k;
  scanf("%d",&t);
  int rcv[t],count=0,x,n,y,res;
 
  for(i=0;i<t;i++)
    scanf("%d",&rcv[i]);
 
   for(i=0;i<t;i++)
   {    count=0;
       //counting
       n=rcv[i];
       x=n%10;
       while(n!=0)
       {
           n=n/10;
           count++;
       }
     //  printf("\n%d number is %d",count,x);
     switch(count)
     {
         case 4: y=10;
         break;
         case 3: y=6;
         break;
         case 2: y=3;
         break;
         case 1: y=1;
         break;
     }
 
     res = y+((x-1)*10);
     printf("\n%d",res);
   }
 
 
}