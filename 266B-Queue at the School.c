#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
 
int main()
{
   int t,n,i,j,l,tmp;
   scanf("%d %d",&t,&n);
   int ord[t];
   char q[t+10];
   scanf("%s",&q);
   for(j=0;j<n;j++)
   {
       l=0;
   for(i=0;i<t;i++)
   {
       if(q[i]=='B')
       {
           if(q[i+1]=='G')
           {
               ord[l]=i;
               l++;
               i++;
           }
       }
   }
   for(i=0;i<l;i++)
     {
         tmp=q[ord[i]];
         q[ord[i]]=q[ord[i]+1];
         q[ord[i]+1]=tmp;
     }
 
   }
 
        printf("%s",q);
 
}