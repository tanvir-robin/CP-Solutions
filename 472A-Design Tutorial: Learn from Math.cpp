#include<stdio.h>
 
int n,i,n1,n2,res1,res2;
 
int isComp(int n)
{
    for(i=2;i<n;i++)
   {
       if(n%i==0)
       {
           return 2;
           break;
       }
       else
       {
           if(i==n-1)
            return 1;
       }
   }
};
 
 
 
int main()
{
 
   scanf("%d",&n);
   n2=n/2;
   n1=n-n2;
 
 
       res1=isComp(n1);
       res2=isComp(n2);
 
       while(res1!=2 || res2!=2)
       {
           n1--;
           n2++;
           res1=isComp(n1);
           res2=isComp(n2);
 
       }
 
       printf("\n%d %d",n1,n2);
 
}
 