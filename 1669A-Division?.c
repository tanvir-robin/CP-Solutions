#include<stdio.h>
 
int main()
{
    int t,i,j,k;
    scanf("%d",&t);
    int rate[t];
 
    for(i=0;i<t;i++)
        scanf("%d",&rate[i]);
    for(i=0;i<t;i++)
    {
        if(rate[i]<=1399)
            printf("Division 4\n");
        else if(rate[i]>=1400 && rate[i]<=1599)
            printf("Division 3\n");
        else if(rate[i]>=1600 && rate[i]<=1899)
            printf("Division 2\n");
 
            else if(rate[i]>=1900)
 
            printf("Division 1\n");
    }
 
}