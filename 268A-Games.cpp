#include<stdio.h>
 
int main()
{
    int n,i,j,k,l, count=0;
    scanf("%d",&n);
    
    int jr[n+100][3];
    
    
    for(i=1; i<=n; i++)
    {
      scanf("%d %d", &jr[i][1], &jr[i][2]);
    }
    
    for(i=1; i<=n; i++)
    {
       for(j=1; j<=n; j++)
       {
          while(i!=j)
           {  if(jr[i][1]==jr[j][2])
             count++;
              break;
           }
    
        }
        
    }
    
    printf("%d", count);
    
}