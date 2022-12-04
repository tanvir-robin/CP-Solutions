#include<stdio.h>
#include<string.h>
 
int main()
{
    int t,i,j,k,countA,countB,countC;
    scanf("%d",&t);
    char str[t][55];
    int n[t];
 
    for(i=0;i<t;i++)
        scanf("%s",&str[i]);
 
     for(i=0;i<t;i++)
     {
         n[i]=strlen(str[i]);
         if(n[i]%2!=0)
            printf("NO\n");
         else
         {    countA=countB=countC=0;
               for(j=0;j<n[i];j++)
               {
                   if(str[i][j]=='A')
                    countA++;
               }
 
             for(j=0;j<n[i];j++)
               {
                   if(str[i][j]=='B')
                    countB++;
               }
 
               for(j=0;j<n[i];j++)
               {
                   if(str[i][j]=='C')
                    countC++;
               }
 
               if(countA+countC==countB)
                printf("YES\n");
               else printf("NO\n");
         }
     }
 
 
}
 