#include<stdio.h>
 
int main()
{
    int t,i,j,k,l,count;
    scanf("%d",&t);
    int arr[t][50],n[t];
 
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        for(j=0;j<n[i];j++)
            scanf("%d",&arr[i][j]);
    }
 
    for(i=0;i<t;i++)
    {   count=k=0;
        if(n[i]<=1)
            printf("0\n");
        else
        {
            for(j=n[i]-2;0<=j;j--)
            {
                 if(arr[i][j+1]==0)
                 {  // printf("\nBreak khaia gesi");
                   k=1;
                 printf("-1\n");
                     break;
 
                 }
 
                while((arr[i][j]>=arr[i][j+1]))
                {
                    arr[i][j]/=2;
                 //  printf("\n comparing to %d Boro and new value %d",arr[i][j+1],arr[i][j]);
                    count++;
 
                }
 
            }
          if(k!=1)
            printf("%d\n",count);
        }
    }
}