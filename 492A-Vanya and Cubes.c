#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
 
int main()
{
   int n,i,j,k,sum=0;
   scanf("%d",&n);
 
   for(i=1;i<=1000;i++)
   {
       k=(i*(i+1))/2;
       sum+=k;
      // printf("\n %dth step banate lagbe %d",i,sum);
       if(n<=sum)
       {
           if(sum==n)
            printf("\n%d",i);
           else printf("\n%d",i-1);
 
           break;
       }
   }
}