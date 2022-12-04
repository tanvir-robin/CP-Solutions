#include<stdio.h>
 
 
int main()
{
   int n, count=0, reminder;
   scanf("%d", &n);
 
 
  for(;;)
    {
  if(100<=n)
   {
    count = count + (n/100);
   n = n%100;
   }
   else if(20<=n)
   {
   count = count + (n/20);
   n = n%20;
   }
    else if(10<=n)
   {
   count = count + (n/10);
   n = n%10;
   }
    else if(5<=n)
   {
   count = count + (n/5);
   n = n%5;
   }
    else if(1<=n)
   {
   count = count + (n/1);
   n = n%1;
   }
  else
    break;
}
printf("%d", count);
 
}