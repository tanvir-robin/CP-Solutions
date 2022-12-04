#include<stdio.h>
#include<string.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
  int n=4,i,j, count=0;
  int h[10];
  for(i=1; i<=n; i++)
  {
      scanf("%d", &h[i]);
  }
 
 
  for(i=1; i<=n; i++)
  {
      for(j=i+1; j<=n; j++)
      {
          if(h[i]==h[j])
          {
              count++;
              break;
          }
      }
  }
 
  printf("%d", count);
}