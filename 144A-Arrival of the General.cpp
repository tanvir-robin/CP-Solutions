#include<stdio.h>
 
int main()
{
    int n,i,j,k, big, small, res, bigindex, smallindex;
    scanf("%d",&n);
    
    int h[n+100];
    
    for(i=1; i<=n; i++)
    {  scanf("%d",&h[i]); }
    
    
    
    big = h[1];
    bigindex=1;
    
    for(i=1; i<n; i++)
    {
       if(big<h[i+1])
        {
          big= h[i+1];
          bigindex= i+1;
        }
    
    }
    
    
    
    small = h[1];
    smallindex = 1;
    
    for(i=1; i<n; i++)
    {
       if(small>=h[i+1])
        {
          small= h[i+1];
          smallindex= i+1;
        }
    
    }
    
    if(smallindex<bigindex)
       res = bigindex-1+n-smallindex-1;
    else 
    res = bigindex-1+n-smallindex;
    
    
    
    
    
    printf("%d",res);
} 