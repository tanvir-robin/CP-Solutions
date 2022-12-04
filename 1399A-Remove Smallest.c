#include<stdio.h>
#include<string.h>
#include<math.h>
 
 
int main()
{
 
 int t,i,j,k,l,m;
 scanf("%d",&t);
 int n[t],arr[t][55];
 
 //input
 for(i=0;i<t;i++)
    {  scanf("%d",&n[i]);
        for(j=0;j<n[i];j++)
            scanf("%d",&arr[i][j]);
    }
 
 //sorting
 
 for(i=0;i<t;i++)
    {
        for(j=0;j<n[i];j++)
            {
                for(k=j+1;k<n[i];k++)
                {
                    if(arr[i][j]>arr[i][k])
                    {
                        m=arr[i][j];
                        arr[i][j]=arr[i][k];
                        arr[i][k]=m;
                    }
                }
            }
    }
 
 
 
 
    //logical processing
    for(i=0;i<t;i++)
    {    l=n[i];
 
        for(j=0;j<l-1;j++)
            {
 
                   // printf("\nSum is %d",arr[i][j+1]-arr[i][j]);
                    if((arr[i][j+1]-arr[i][j])<=1)
                    {  // printf("\nExecuted in %d",arr[i][j]);
                        n[i]--;
                    }
 
            }
           if(n[i]<=1)
            printf("\nYES");
           else printf("\nNO");
    }
 
 
 
}