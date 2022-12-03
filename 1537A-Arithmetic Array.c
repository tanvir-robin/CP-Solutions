#include<stdio.h>
 
int main()
{
    int t,i,j,k,sum,ans;
    scanf("%d",&t);
    int arr[t][1000],n[t];
    
    for(i=0;i<t;i++)
    {
       scanf("%d",&n[i]);
        
        for(j=0;j<n[i];j++)
          scanf("%d",&arr[i][j]);
    }
    
    
    for(i=0;i<t;i++)
    {
      sum=0;
       
       for(j=0;j<n[i];j++)
           sum+=arr[i][j];
        
        if(sum>=n[i])
          ans=sum-n[i];
        else 
          ans=1;
        
        printf("%d\n",ans);
    
    }
}