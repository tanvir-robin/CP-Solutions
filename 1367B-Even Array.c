#include<stdio.h>
#include<string.h>
 
int main()
{
   int t;
   scanf("%d",&t);
   int n[t],i,j,k,arr[t][1000],countj[t],countb[t];
 
   for(i=0; i<t; i++)
   {
       scanf("%d",&n[i]);
 
       for(j=0;j<n[i];j++)
        scanf("%d",&arr[i][j]);
 
 
       countj[i]=0;
       countb[i]=0;
        for(j=0;j<n[i];j++)
        {
            if(j%2!=arr[i][j]%2)
                {
                    if(j%2==0)
                        countj[i]++;
                    else
                        countb[i]++;
                }
        }
 
 
   }
 
 for(j=0;j<t;j++)
 {
     if(countj[j]==countb[j])
        printf("\n%d",countj[j]);
     else
        printf("\n-1");
 }
 
}