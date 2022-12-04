#include<stdio.h>
#include<string.h>
 
int main()
{
   int n,i,mi=0,ch=0;
   scanf("%d",&n);
   int m[n],c[n];
 
   for(i=0;i<n;i++)
   {
       scanf("%d %d",&m[i],&c[i]);
   }
 
    for(i=0;i<n;i++)
    {
        if(m[i]>c[i])
            mi++;
        else if(m[i]<c[i])
            ch++;
    }
 
    if(mi>ch)
        printf("Mishka");
    else if(mi<ch)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
 
}