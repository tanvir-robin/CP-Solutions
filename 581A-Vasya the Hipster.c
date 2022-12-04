#include<stdio.h>
 
 
int main()
{
   int r,b,j,k,i,res1,res2, count=0;
   scanf("%d %d", &r, &b);
 
   if(r>b)
    res1 = b;
   else
    res1=r;
 
   res2 = abs((r-b)/2);
 
   printf("%d %d", res1, res2);
 
 
 
}