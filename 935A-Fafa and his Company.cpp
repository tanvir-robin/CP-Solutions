#include<stdio.h>
 
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int count=1;
 
    for(i=2;i<n;i++)
    {
        if((n-i)%i==0)
            count++;
    }
    printf("\n%d",count);
}