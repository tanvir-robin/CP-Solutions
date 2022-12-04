#include<stdio.h>
 
int main()
{
    int n,k,i,j, count=0;
    scanf("%d %d", &n, &k);
    
    k= 240-k;
    j=0;
    
    for(i=1; i<=n; i++)
    {
      j= j+ (5*i);
    
    if(j>k)
       break;
    else
     count++;
    }
    
    printf("%d", count);
}