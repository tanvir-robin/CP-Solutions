#include<stdio.h>
#include<string.h>
 
int main()
{
   int n, k, l, c, d, p, nl, np,drink,lime,salt;
   scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
   drink = (k*l)/nl;
   lime = c*d;
   salt = p/np;
 
   if(salt<=drink && salt<=lime)
    printf("%d",salt/n);
   else if(lime<=drink && lime<=salt)
    printf("%d",lime/n);
   else
    printf("%d",drink/n);
 
}