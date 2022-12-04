#include<stdio.h>
 
int main()
{
    
 
    int t,n,i;
    scanf("%d",&t);
    int ca[t];
 
    for(i=0; i<t; i++)
        scanf("%d",&ca[i]);
 
 
    for(i=0; i<t; i++)
    {
        if(ca[i]%2==0)
        {
            n=(ca[i]/2)-1;
            printf("\n%d",n);
 
        }
        else
        {
            {
                n=(ca[i]-1)/2;
                printf("\n%d",n);
 
            }
 
        }
 
 
    }
}