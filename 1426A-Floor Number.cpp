#include<stdio.h>
 
int main()
{
   long long t,i,j,k,apt,res;
   scanf("%lli",&t);
   long long n[t+10],m[t+10];
   for(i=0;i<t;i++)
    scanf("%lli %lli",&n[i],&m[i]);
 
    for(i=0;i<t;i++)
    {   apt=2;
         res=1;
        while(apt<n[i])
        {
            apt+=m[i];
            res++;
        }
           printf("\n%lli",res);
    }
}