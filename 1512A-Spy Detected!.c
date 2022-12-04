#include<stdio.h>
 
int main()
{
    int t,i,j,k,count=0;
    scanf("%d",&t);
    int spy[t][100],n[t+1];
 
    for(i=0; i<t; i++)
    {   scanf("%d",&n[i]);
        for(j=0; j<n[i]; j++)
            scanf("%d",&spy[i][j]);
    }
 
 
    for(i=0; i<t; i++)
    {   count=0;
        for(j=1; j<n[i]; j++)
        {
            if(spy[i][0]==spy[i][j])
                count++;
 
 
        }
 
        if(count>=1)
        {
            for(j=1; j<n[i]; j++)
            {
 
                if(spy[i][0]!=spy[i][j])
                {   printf("\n%d",j+1);
                    break;
 
                }
            }
        }
        else
            printf("\n1");
 
 
    }
 
 
 
 
 
}