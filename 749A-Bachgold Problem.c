#include<stdio.h>
 
int main()
{
     int n,i,j,k;
     scanf("%d",&n);
 
     if(n%2!=0)
     {
       i=(n-3)/2;
       printf("%d\n",i+1);
       for(j=1;j<=i;j++)
       {
           printf("2 ");
       }
       printf("3");
 }
 else{
    i=(n)/2;
       printf("%d\n",i);
       for(j=1;j<=i;j++)
       {
           printf("2 ");
       }
 }
 
 
}
 