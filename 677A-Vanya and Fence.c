#include<stdio.h>
#include<string.h>
 
int main()
{
    int n,h,i,j,k, count=0;
    scanf("%d %d",&n, &h);
    
    int ch[n+500];
    
    
    for(i=1; i<=n; i++)
    {
      scanf("%d", &ch[i]);
    }
     
    
    
    
    
    
    for(i=1; i<=n; i++)
    {
       if(ch[i]>h)
          count= count+2;
        else
          count++;
    
    }
    
    printf("%d", count);
}