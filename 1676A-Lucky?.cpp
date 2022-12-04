#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main()
{
    int t,i,j,res1,res2;
    scanf("%d",&t);
    char tkt[t][6];
 
    for(i=0;i<t;i++)
        scanf("%s",&tkt[i]);
 
    for(i=0;i<t;i++)
    {  res1=res2=0;
        for(j=0;j<3;j++)
            res1+=(int)tkt[i][j]-48;
        for(j=3;j<6;j++)
            res2+=(int)tkt[i][j]-48;
 
        if(res1==res2)
            printf("YES\n");
        else printf("NO\n");
    }
}