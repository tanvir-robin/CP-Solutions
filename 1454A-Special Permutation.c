#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
 
int main()
{
   int t,i,j,k,tmp;
   scanf("%d",&t);
   int n[t],per[t][110];
 
 
   for(i=0;i<t;i++)
    scanf("%d",&n[i]);
 
   for(i=0;i<t;i++)
   {
     for(j=0;j<n[i];j++)
        per[i][j]=(j+1);
 
     //shuffling
     for(j=0;j<n[i]-1;j++)
     {
       tmp=per[i][j];
       per[i][j]=per[i][j+1];
       per[i][j+1]=tmp;
     }
   }
 
 
    for(i=0;i<t;i++)
   {
     for(j=0;j<n[i];j++)
        printf("%d ",per[i][j]);
      printf("\n");
   }
}