#include<stdio.h>
#include<string.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
int i,j, count=0, res;
char ch[1500];
scanf("%s", &ch);
 
 
  for(i=0; i<strlen(ch); i++)
  {
     for(j=i+1; j<strlen(ch); j++)
     {
         if(ch[j]==ch[i])
         {
             count++;
             break;
         }
     }
  }
 
  res= (strlen(ch))-count;
  if(res%2==0)
    printf("CHAT WITH HER!");
  else
    printf("IGNORE HIM!");
}