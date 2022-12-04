#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
 
int main()
{
   int t,i,j,k,l,tmp,count,rem;
   scanf("%d",&t);
   int n[t+10],sub[1000];
  // taking inputs
   for(i=0;i<t;i++)
    scanf("%d",&n[i]);
 
   // processing
    for(i=0;i<t;i++)
    {   count=0;
        l=0;
        k=0;
        tmp=n[i];
 
        while(tmp!=0)
        {
            rem=tmp%10;
            if(rem!=0)
            {
                count++;
                sub[l]=rem*(pow(10,k));
                l++;
            }
            tmp=tmp/10;
            k++;
        }
 
        printf("\n%d\n",count);
        for(j=0;j<l;j++)
            printf("%d ",sub[j]);
 
    }
 
}