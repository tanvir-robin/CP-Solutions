#include<stdio.h>
 
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    char poly[n][50];
 
 
    for(i=0; i<n; i++)
        scanf("%s",&poly[i]);
 
 
    for(i=0; i<n; i++)
    {
        if(poly[i][0]=='T')
            sum+=4;
        else if(poly[i][0]=='C')
            sum+=6;
        else  if(poly[i][0]=='O')
            sum+=8;
        else if(poly[i][0]=='D')
            sum+=12;
        else if(poly[i][0]=='I')
            sum+=20;
 
 
    }
 
    printf("\n%d",sum);
}