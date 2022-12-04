#include<stdio.h>
#include<string.h>
#include<string.h>
#include<ctype.h>
 
int main()
{  int a,b, i;
   scanf("%d %d", &a, &b);
 
   for(i=1; i<5000; i++)
   {
       a= a*3;
       b= b*2;
       if(b<a)
       {
           printf("%d", i);
           break;
       }
   }
}