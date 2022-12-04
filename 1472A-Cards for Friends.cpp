#include<stdio.h>
#include<string.h>
#include<math.h>
 
 
int main()
{
    int t,i,j,p,total;
    scanf("%d",&t);
    int w[t+10],h[t+10],n[t+10];
 
    for(i=0;i<t;i++)
        scanf("%d %d %d",&w[i],&h[i],&n[i]);
 
     for(i=0;i<t;i++)
     {  p=1;
        total=0;
 
         while(w[i]%2==0 || h[i]%2==0)
         {
             if(w[i]%2==0)
             {
                 p=p*2;
                 w[i]=w[i]/2;
 
             }
             else if(h[i]%2==0)
             {
                  p=p*2;
                 h[i]=h[i]/2;
 
             }
         }
         if(p>=n[i])
            printf("\nYES");
         else
            printf("\nNO");
     }
 
}