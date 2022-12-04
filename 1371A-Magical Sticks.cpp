#include<stdio.h>
#include<string.h>
 
 
int main()
{
    int t,n,i;
    scanf("%d",&t);
    int st[t+10];
 
    //taking input
    for(i=0;i<t;i++)
        scanf("%d",&st[i]);
 
     //processing
      for(i=0;i<t;i++)
      {
          if(st[i]%2==0)
            printf("\n%d",st[i]/2);
          else
            printf("\n%d",(st[i]+1)/2);
      }
}