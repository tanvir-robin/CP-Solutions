#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
    int i;
char ch[1500];
scanf("%s", ch);
 
 ch[0]= toupper(ch[0]);
 
 for(i=0; i<strlen(ch); i++)
 {
     printf("%c", ch[i]);
 }
}