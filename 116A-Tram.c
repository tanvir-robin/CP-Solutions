#include<stdio.h>
#include<string.h>
#include<string.h>
#include<ctype.h>
 
int main()
{  int n,i, res;
   scanf("%d", &n);
   int out[2000], in[2000];
 
   for(i=1; i<=n; i++)
   {
       scanf("%d %d", &out[i], &in[i]);
   }
 
   for(i=1; i<n; i++)
   {
       in[i+1]= (in[i]+in[i+1])-out[i+1];
 
 
   }
 
   res = in[1];
   for(i=1; i<n; i++)
   {
 
 
       if(res<in[i+1])
        {
         res= in[i+1];
        }
   }
 
 
   printf("%d \n", res);
}