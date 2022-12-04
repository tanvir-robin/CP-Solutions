#include<stdio.h>
#include<string.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
    int n,i;
    double sum=0, res;
    scanf("%d", &n);
    int p[n+100];
 
    for(i=1; i<=n; i++)
    {
        scanf("%d", &p[i]);
    }
 
    for(i=1; i<=n; i++)
    {
        sum = sum+ p[i];
    }
    res = (sum/n);
    printf("%0.10lf", res);
}