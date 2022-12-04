#include<stdio.h>
 
int main()
{
    int n,m,i,j,prime=0,tmp;
    scanf("%d %d",&n,&m);
 
    while(prime==0)
    {
        for(i=2;i<n+1;i++)
        {
            if((n+1)%i!=0)
               {
                   if(i==n)
                    prime=n+1;
                   continue;
               }
            else
                break;
 
        }
        n++;
    }
    if(prime==m)
        printf("YES\n");
    else printf("NO\n");
 
   
}