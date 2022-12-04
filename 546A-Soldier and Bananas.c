#include<stdio.h>
 
int main()
{
 int k,n,w,i,j,sum=0;
 scanf("%d %d %d", &k, &n, &w);
 
 for(i=1; i<=w; i++)
 {
     sum = sum + k*i;
 }
 
 if(sum<=n)
    printf("0");
 else
  printf("%d", sum-n);
}