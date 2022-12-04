#include<stdio.h>
 
int main()
{
   int i,n, count=1;
   scanf("%d", &n);
   int m[n+100];
 
 for(i=1; i<=n; i++)
{    scanf("%d", &m[i]);
 
}
 
 
 
 
 for(i=1; i<n; i++)
{
   if(m[i]!=m[i+1])
     count++;
 
}
printf("%d", count);
}