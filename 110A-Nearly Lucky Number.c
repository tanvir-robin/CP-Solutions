#include<stdio.h>
#include<string.h>
 
int main()
{
   int i, count=0;
char ch[1000];
scanf("%s", &ch);
 
 
 for(i=0; i<=(strlen(ch)); i++)
{     
 
    if(ch[i]=='4' || ch[i]=='7')
      count++;
}
 
 
  if(count==4 || count==7)
  printf("YES");
  else
  printf("NO");
 
}