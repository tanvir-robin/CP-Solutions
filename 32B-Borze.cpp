#include<stdio.h>
#include<string.h>
 
 
int main()
{
    int n,i,j,k;
 char ch[200];
 scanf("%s",&ch);
 
 for(i=0;i<strlen(ch);i++)
 {
     if(ch[i]=='.')
        printf("0");
     else
     {
         if(ch[i+1]=='.')
            printf("1");
        else if(ch[i+1]=='-')
          printf("2");
          i++;
     }
 
 }
 
}