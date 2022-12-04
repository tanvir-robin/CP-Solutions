#include<stdio.h>
#include<string.h>
 
int main()
{
int n,i;
scanf("%d",&n);
 
char ch[200][300];
 
for(i=1; i<=n; i++)
{
scanf("%s", ch[i]);
}
 
 
 
 
for(i=1; i<=n; i++)
{
 
    if(strlen(ch[i])>10)
    {
        printf("%c%d%c \n", ch[i][0], strlen(ch[i])-2, ch[i][(strlen(ch[i]))-1]);
    }
    else
       {
            printf("%s \n", ch[i]);
       }
}
}