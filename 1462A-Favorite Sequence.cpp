#include<stdio.h>
 
int main()
{
    long long t,i,j,k,count,fi,li;
    scanf("%lli",&t);
    long long arr[t][1000],n[t];
 
    for(i=0;i<t;i++)
    {   scanf("%lli",&n[i]);
        for(j=0;j<n[i];j++)
             scanf("%lli",&arr[i][j]);
    }
 
    for(i=0;i<t;i++)
    {
      fi=0;
      li=n[i]-1;
 
      while(fi<=li)
      {
          if(fi==li)
          printf("%d ",arr[i][fi]);
          else
          {
          printf("%d ",arr[i][fi]);
          printf("%d ",arr[i][li]);
          }
          fi++;
          li--;
      }
      printf("\n");
    }
 
}