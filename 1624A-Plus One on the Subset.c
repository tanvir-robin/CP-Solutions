#include<stdio.h>
#include<string.h>
 
int main()
{
  int t,i,j,k;
  scanf("%d",&t);
  int arr[t][100],n[t],tmp,res;
 
  //input
  for(i=0;i<t;i++)
  {
      scanf("%d",&n[i]);
      for(j=0;j<n[i];j++)
        scanf("%d",&arr[i][j]);
}
//sorting
for(i=0;i<t;i++)
{
    for(j=0;j<n[i];j++)
    {
        for(k=j+1;k<n[i];k++)
        {
            if(arr[i][j]>arr[i][k])
            {
                tmp=arr[i][j];
                arr[i][j]=arr[i][k];
                arr[i][k]=tmp;
            }
        }
    }
 
}
    //result findings
    for(i=0;i<t;i++)
    {
        res=arr[i][n[i]-1]-arr[i][0];
        printf("\n%d",res);
    }
}