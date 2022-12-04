#include<stdio.h>
#include<string.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
 
  int n,i,j,k;
  scanf("%d", &n);
  int t[n+10];
 
  for(i=1; i<=n; i++)
    scanf("%d", &t[i]);
 
 
  for(i=1; i<=n; i++)
  {
 
      for(j=1; j<=n; j++)
      {
          if(t[j]==i)
            printf("%d ",j);
      }
  }
 
}