#include<stdio.h>
 
int main()
{
    long long t,i,j,k,count,fi,li;
    scanf("%lli",&t);
    long long arr[t][2200],n[t];
 
    for(i=0;i<t;i++)
    {   scanf("%lli",&n[i]);
        for(j=0;j<n[i];j++)
             scanf("%lli",&arr[i][j]);
    }
 
    for(i=0;i<t;i++)
    {
      count=0;
      for(j=0;j<n[i];j++)
        {
            if(arr[i][j]%2!=0)
                count++;
        }
        if(count%2!=0 || (count>0 && count<n[i]))
            printf("YES\n");
        else printf("NO\n");
    }
 
}