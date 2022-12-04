#include<stdio.h>
 
int main()
{
    int t,i,j,k,l,sum=0;
    scanf("%d",&t);
    int num[t+10][10];
 
    for(i=0; i<t; i++)
        scanf("%d %d",&num[i][0],&num[i][1]);
 
    for(i=0; i<t; i++)
    {
        if(num[i][0]<num[i][1])
            printf("\n%d",num[i][1]-num[i][0]);
 
 
        else if(num[i][0]%num[i][1]==0)
            printf("\n0");
 
 
 
        else
        {
            sum=0;
            l=(num[i][0]/num[i][1])+1;
 
            sum=num[i][1]*l;
 
            printf("\n%d",sum-num[i][0]);
 
        }
 
 
    }
 
 
 
 
}