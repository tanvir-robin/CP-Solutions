#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main()
{  int i;
  char ch[5][2000];
  for(i=1; i<=2; i++)
     scanf("%s", &ch[i]);
 
     for(i=0; i<=strlen(ch[1]); i++)
     {
         ch[1][i]= tolower(ch[1][i]);
     }
 
        for(i=0; i<=strlen(ch[2]); i++)
     {
         ch[2][i]= tolower(ch[2][i]);
     }
 
 
 
 
  printf("%d", strcmp(ch[1], ch[2]));
}