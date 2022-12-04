#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main()
{
    char ch[100000];
    int n[5],sum=0,i;
    scanf("%d %d %d %d",&n[1],&n[2],&n[3],&n[4]);
    scanf("%s",&ch);
 
   for(i=0;i<strlen(ch);i++)
   {
       if(ch[i]=='1')
         sum+=n[1];
         else if(ch[i]=='2')
         sum+=n[2];
         else if(ch[i]=='3')
         sum+=n[3];
        else if(ch[i]=='4')
        sum+=n[4];
 
   }
   printf("%d",sum);
 
 
}