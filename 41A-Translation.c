#include<stdio.h>
#include<string.h>
int main()
{ 
 
   int i,j,k, count=0;
   char s[1050];
   char t[1050];
scanf("%s", &s);
scanf("%s", &t);
 
 
k=strlen(s);
for(i=0; i<strlen(s); i++)
 {
   if(s[i]!=t[k-1-i])
     count++;
}
 
if(count>0)
  printf("NO");
else
 printf("YES");
 
}