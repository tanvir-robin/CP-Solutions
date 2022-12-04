#include<stdio.h>
#include<string.h>
#include<string.h>
#include<ctype.h>
 
int main()
{  int n,i,count=0;
scanf("%d", &n);
  char ch[n];
  scanf("%s", ch);
 
 
  for(i=0; i<strlen(ch); i++)
  {
      if(ch[i]==ch[i+1])
      {
       count++;
 
      }
 
  }
  printf("%d", count);
}