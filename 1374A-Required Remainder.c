#include<stdio.h>
 
int main()
{
   int t,i,j,temp;
    scanf("%d", &t);
    int x[t+10],y[t+10],n[t+10];
 
    for(i=1; i<=t; i++)
         scanf("%d %d %d", &x[i],&y[i],&n[i]);
 
 
   for(i=1; i<=t; i++)
    {
       temp = (n[i]-y[i])/x[i];
       printf("\n%d", (temp*x[i])+y[i]);
    }
}