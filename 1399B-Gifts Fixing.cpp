#include<stdio.h>
 
int main()
{
    int t,ni,i,j,k,l,m;
    scanf("%d",&t);
    long long a[t][10000],b[t][10000];
    long n[t],al[t],bl[t];
    
    //input
    for(i=0;i<t;i++)
    {    scanf("%lli",&n[i]);
       for(j=0;j<n[i];j++)
         scanf("%lli",&a[i][j]);
        
        for(j=0;j<n[i];j++)
         scanf("%lli",&b[i][j]);
    }
    
    
    //finding lowest
    for(i=0;i<t;i++)
    {    al[i]=a[i][0]; bl[i]=b[i][0];
       for(j=1;j<n[i];j++)
          {
           if(al[i]>a[i][j])
             al[i]=a[i][j];
        
          }
        
        for(j=1;j<n[i];j++)
          {
           if(bl[i]>b[i][j])
             bl[i]=b[i][j];
        
          }
    }
    
    
    //logical segment
    long long count;
    
    for(i=0;i<t;i++)
    {
       count=0;
    
       for(j=0;j<n[i];j++)
       {
         if((a[i][j]-al[i])>=(b[i][j]-bl[i]))
           {
              count+=a[i][j]-al[i];
        
          }
        else 
           count+=b[i][j]-bl[i];
       }
    printf("\n%lli",count);
    
    }
    
    
}