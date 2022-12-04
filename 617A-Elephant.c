#include<stdio.h>
 
 
 
int main()
 
{
 
int x,i,c;
 
 
 
scanf("%d", &x);
 
if(x>5 && x%5!=0 )
 
{
 
i = (x/5)+1;
printf("%d", i);
 
}
 
else if(x%5==0)
 
{
i = x/5;
printf("%d",i);
}
 
else
{
 
i =1;
 
printf("%d",i);
 
}
}
 
 