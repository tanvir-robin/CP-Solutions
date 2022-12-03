#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{ int t,j,i;
  scanf("%d",&t);
  int n[t];
  for(i=0;i<t;i++)
    scanf("%d",&n[i]);
 
 
  for(i=0;i<t;i++)
  {
      for(j=1;j<=n[i];j++)
        printf("1 ");
      printf("\n");
  }
}