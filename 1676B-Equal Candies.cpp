#include<stdio.h>
 
 
int main()
{
    int t,i,j,res1,res2;
    scanf("%d",&t);
    int can[t][50],n[t];
 
    for(i=0;i<t;i++)
        {
            scanf("%d",&n[i]);
 
            for(j=0;j<n[i];j++)
                scanf("%d",&can[i][j]);
 
        }
 
    for(i=0;i<t;i++)
    {  res1=can[i][0];
    res2=0;
        for(j=1;j<n[i];j++)
        {
            if(res1>can[i][j])
                res1=can[i][j];
        }
        for(j=0;j<n[i];j++)
            res2+=can[i][j]-res1;
 
        printf("%d\n",res2);
    }
}