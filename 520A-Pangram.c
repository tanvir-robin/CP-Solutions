#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
    int n,i,j,k=0,count[130];
    scanf("%d",&n);
    char pan[n+10];
    scanf("%s",&pan);
    
    if(n<26)
     printf("NO");
    
    else
    {
    
    for(i=0;i<strlen(pan);i++)
       pan[i]=tolower(pan[i]);
    
    for(i=97;i<=122;i++)
     {  count[i]=0;
      for(j=0;j<strlen(pan);j++)
       {
        if(pan[j]==i)
          {
          count[i]++;
         
          }
    
       }
    
     }
    
 int cn=0;   
    for(i=97;i<=122;i++)
     {
      if(count[i]>=1)
       cn++;
    
      }
    
    
    if(cn>=26)
      printf("YES");
    else 
     printf("NO");
    }
}