#include<stdio.h>
 
int main()
{
    int n,i,j,k,big,res=0;
    scanf("%d",&n);
    int br[n+100];
    
    for(i=1; i<=n; i++)
       scanf("%d", &br[i]);
    
    big = br[1];
    
    for(i=2; i<=n; i++)
    {
    
    if(big<br[i])
     big = br[i];
    }
    
    for(i=1; i<=n; i++)
    {
     res = res + (big-br[i]);
    
    }
   
    
    printf("%d",res);
   
}