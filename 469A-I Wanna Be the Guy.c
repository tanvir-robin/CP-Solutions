#include<stdio.h>
 
int main()
{
    int n,i,j,k,l,m,xl,yl;
    scanf("%d",&n);
    int count[n+1];
    scanf("%d",&xl);
    int x[xl];
    for(i=0; i<xl; i++)
        scanf("%d",&x[i]);
 
    scanf("%d",&yl);
    int y[yl];
    for(i=0; i<yl; i++)
        scanf("%d",&y[i]);
 
 
    for(i=1; i<=n; i++)
    {   count[i]=0;
        for(j=0; j<xl; j++)
        {
            if(x[j]==i)
            {
                count[i]++;
                break;
            }
        }
 
        for(j=0; j<yl; j++)
        {
            if(y[j]==i)
            {
                count[i]++;
                break;
            }
        }
 
 
 
    }
 
    int cn=0;
 
    for(i=1; i<=n; i++)
    {
        if(count[i]>=1)
            cn++;
 
    }
 
 
    if(cn>=n)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
}