#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
   char ch[1500];
    int i, uc=0, lc=0;
   scanf("%s",&ch);
 
 
   for(i=0; i<strlen(ch); i++)
 
  {
     if(ch[i]>='A' && ch[i]<='Z')
       uc=uc+1;
    else
     lc=lc+1;
}
 
  if(lc>=uc)
 {
 
 
for(i=0; i<strlen(ch); i++)
 
  {
     ch[i] = tolower(ch[i]);
    printf("%c", ch[i]);
} 
 
}
 
 
if(uc>lc)
 {
 
 
for(i=0; i<strlen(ch); i++)
 
  {
     ch[i] = toupper(ch[i]);
    printf("%c", ch[i]);
} 
}
 
 
  
}