#include<stdio.h>
 
int main()
{
    int t,i,j,k,sum,ans;
    scanf("%d",&t);
    int a[t],b[t],n[t],temp,count;
    
    for(i=0;i<t;i++)
      scanf("%d %d %d",&a[i],&b[i],&n[i]);
    
    
    for(i=0;i<t;i++)
    {  count=0;
       while(a[i]<=n[i] && b[i]<=n[i])
       {
         sum=a[i]+b[i];
     //  a[i]=a[i]<b[i] ? sum : a[i];
     //  b[i]=b[i]<a[i] ? sum : b[i];
        if(a[i]>b[i])
           b[i]=sum;
        else a[i]=sum;
       count++;
    }
    
    printf("%d\n",count);
    }
}