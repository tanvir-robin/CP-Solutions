#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{ int t,i,j,k,temp,a,b;
   scanf("%d",&t);
   int x[t],y[t];
 
 
  for(i=0;i<t;i++)
  {
      scanf("%d %d",&x[i],&y[i]);
  }
 
 
 
 
  for(i=0;i<t;i++)
  {
      if(y[i]%x[i]!=0)
        printf("0 0\n");
      else
      {
          temp=y[i]/x[i];
          b=temp;
          a=1;
          printf("%d %d\n",a,b);
 
      }
 
  }
}