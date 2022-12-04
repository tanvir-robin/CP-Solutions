#include<stdio.h>
#include<string.h>
 
int main()
{
    char ch[5][100000];
    int len[5],sum[5],i,j;
    for(i=1; i<=3; i++)
    scanf("%s",&ch[i]);
    
    
    
    for(j=1; j<=3; j++)
    {
    len[j]= strlen(ch[j]);
    sum[j] = 0;
    for(i=0; i<=strlen(ch[j]); i++)
    {
       
       sum[j] = sum[j] + (ch[j][i]/2);
    
    }
    
    }
    
       
   if(sum[1]+sum[2]==sum[3] && len[1]+len[2]==len[3])
    printf("YES");
    else 
    printf("NO");
}