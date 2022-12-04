#include<stdio.h>
 
 
int main()
{
 
  int n[4];
  int i,j,k,max;
 
  for(i=1; i<=4; i++)
    scanf("%d", &n[i]);
 
  max = n[1];
  for(i=2; i<=4; i++)
  {
      if(max<n[i])
        max = n[i];
  }
 
  for(i=1; i<=4; i++)
  {
      if(max-n[i]!=0)
        printf("%d ",max-n[i]);
  }
 
}