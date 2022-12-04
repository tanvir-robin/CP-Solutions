#include<stdio.h>
#include<string.h>
 
int main()
{
  int t,i,j,k,l,tmp,a,b,c;
  scanf("%d",&t);
  int ath[t+10][50],n[t+10],dif[t+10][50];
 
  //input section
  for(i=0;i<t;i++)
  {
      scanf("%d",&n[i]);
      for(j=0;j<n[i];j++)
        scanf("%d",&ath[i][j]);
  }
 
  //sorting
  for(i=0;i<t;i++)
  {
      for(l=0;l<n[i];l++)
      {
          for(j=l+1;j<n[i];j++)
      {
          if(ath[i][l]>ath[i][j])
          {
              tmp=ath[i][l];
              ath[i][l]=ath[i][j];
              ath[i][j]=tmp;
          }
      }
      }
 
  }
 
 
  for(i=0; i<t; i++)
  {
      for(j=0;j<n[i];j++)
      {
 
              dif[i][j]=abs(ath[i][j]-ath[i][j+1]);
 
      }
  }
 
 
 
 
  //print
 int sm;
  for(i=0;i<t;i++)
  {   sm=dif[i][0];
       for(j=1;j<n[i]-1;j++)
        {
         if(sm>dif[i][j])
            sm=dif[i][j];
        }
 
        printf("\n%d",sm);
  }
 
 
}