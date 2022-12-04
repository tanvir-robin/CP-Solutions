#include<stdio.h>
 
int main()
{
    int n,i,count=0;
    scanf("%d", &n);
    int ch[n+10];
    
    for(i=1; i<=n; i++)
    {
      scanf("%d %d", &ch[i], &ch[i+1]);
      
    
       if(ch[i+1]-ch[i]>=2)
        count++;
    }
    
    printf("%d",count);
}