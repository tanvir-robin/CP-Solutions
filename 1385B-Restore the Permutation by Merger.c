#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
 
int main()
{
   int t,i,j,k,l,tmp;
   scanf("%d",&t);
   int n[t],arr[t][1000],narr[t][60];
 
//input  taking
   for(i=0;i<t;i++)
   {
       scanf("%d",&n[i]);
     for(j=0;j<2*n[i];j++)
        scanf("%d",&arr[i][j]);
   }
 
   for(i=0;i<t;i++)
   {  l=0;
     for(j=0;j<2*n[i];j++)
     {
         for(k=j+1;k<2*n[i];k++)
         {
             if(arr[i][j]==arr[i][k])
             {
                 narr[i][l]=arr[i][j];
                 l++;
                 break;
             }
         }
     }
   }
 
 
    for(i=0;i<t;i++)
   {
     for(j=0;j<n[i];j++)
        printf("%d ",narr[i][j]);
      printf("\n");
   }
}