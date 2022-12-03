#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{ int t,i,j,k,res,temp,count;
  scanf("%d",&t);
  int n[t],d[t],arr[t][110];
 
  for(i=0;i<t;i++)
  {
      scanf("%d %d",&n[i],&d[i]);
 
      for(j=0;j<n[i];j++)
        scanf("%d",&arr[i][j]);
  }
 
   for(i=0;i<t;i++)
   {  count=0;
         for(j=0;j<n[i];j++)
         {
             if(arr[i][j]>d[i])
             {
                 count++;
                 break;
             }
         }
 
         if(count<=0)
            printf("YES\n");
         else
         {    count=0;
                   for(j=0;j<n[i]-1;j++)
                   {
                       for(k=j+1;k<n[i];k++)
                       {
                           if(arr[i][j]+arr[i][k]<=d[i])
                        {   count++;
                            printf("YES\n");
                            break;
                        }
                       }
                        if(count>0)
                            break;
 
                   }
                   if(count<=0)
                    printf("NO\n");
         }
 
   }
 
 
 
}