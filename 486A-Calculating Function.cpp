#include<stdio.h>
#include <math.h>
 
int main()
{
    int i, sum=0;
    long long n;
    scanf("%lli",&n);
    
    
    if(n%2==0)
      printf("%lli", n/2);
    else 
    printf("%lli", -(n+1)/2);
       
   
}