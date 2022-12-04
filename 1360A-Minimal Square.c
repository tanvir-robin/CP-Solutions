#include<stdio.h>
#include<string.h>
 
int main()
{
  int t,i,j,k,l;
  scanf("%d",&t);
  int cs[t][2];
 
  for(i=0; i<t; i++)
    scanf("%d %d",&cs[i][0],&cs[i][1]);
 
 
  for(i=0; i<t; i++)
  {
      if(cs[i][0]>cs[i][1])
      {
          j= cs[i][1]*2;
          if(j>=cs[i][0])
            printf("\n%d",j*j);
          else
            printf("\n%d",cs[i][0]*cs[i][0]);
      }
      else
      {
           j= cs[i][0]*2;
          if(j>=cs[i][1])
            printf("\n%d",j*j);
          else
            printf("\n%d",cs[i][1]*cs[i][1]);
      }
 
  }
}