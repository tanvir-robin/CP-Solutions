#include<stdio.h>
#include<string.h>
 
int main()
{
    int n,i,j,k,a=0,d=0;
    
    scanf("%d",&n);
    char ch[n+10];
    
    scanf("%s",&ch);
    
    
    for(i=0; i<strlen(ch); i++)
    {
      if(ch[i]=='A')
         a++;
        else
          d++;
    }
    if(a>d)
    printf("Anton");
    else if(a==d)
     printf("Friendship");
    else
    printf("Danik");
}