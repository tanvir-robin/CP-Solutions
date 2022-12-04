#include<stdio.h>
#include<string.h>
 
int main()
{
   int n,i,j,k,l;
   scanf("%d", &n);
   char ch[n+10][110];
    
    
    for(i=1; i<=n; i++)
      scanf("%s",&ch[i]);
    
    for(i=1; i<=n; i++)
    {   
     printf("\n");
      if(strlen(ch[i])<=2)
        printf("%s", ch[i]);
      else 
    {
      printf("%c",ch[i][0]);
      for(j=1; j<=strlen(ch[i])-2; j=j+2)
      {
         printf("%c",ch[i][j]);
        
    
    }
    printf("%c",ch[i][strlen(ch[i])-1]);
    
    }
    
    
    }
    
}