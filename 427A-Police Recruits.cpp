#include<stdio.h>
 
int main()
{
   int n,i,j,k, countc=0, countp=0;
  scanf("%d",&n);
  int e[n+100];
 
 
   for(i=1; i<=n; i++)
      scanf("%d",&e[i]);
    
    
    for(i=1; i<=n; i++)
     {
        if(e[i]==-1)
        
        { if(countp>0)
             countp--;
        
        else
           countc++;
        }
        else
          countp= countp+e[i];
    
    }
    
    printf("%d", countc);
}