#include<stdio.h>
#include<string.h>
#include<math.h>
 
 
int main()
{
 
 int n=0,l,i,k,j=0;
 char ch[1000],tmp[1000];
 gets(ch);
 
 for(i=1;i<=strlen(ch);i=i+3)
   {     if(ch[i]!=' ' && ch[i]!=',' && ch[i]!='}')
        {
           tmp[j]=ch[i];
           j++;
           n++;
        }
   }
 
   l=n;
/* printf("%s",tmp);
  n=strlen(tmp); */
   for(i=0;i<=n;i++)
   {
       for(k=i+1;k<=n;k++)
       {
           if(tmp[i]==tmp[k])
           {
               l--;
               break;
           }
       }
   }
 
printf("\n%d",l);
 
 
 
}