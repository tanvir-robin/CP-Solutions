#include<stdio.h>
#include<string.h>
 
int i,j,k,res;
 
 
int chk(char str[110])
{
    int  ni=strlen(str);
    char str1[110];
    char str2[110];
 
    for(j=0;j<=(ni/2)-1;j++)
       str1[j]=str[j];
       str1[ni/2]='\0';
    k=0;
 
      for(j=(ni/2);j<ni;j++)
      {
           str2[k]=str[j];k++;
      }
        str2[k]='\0';
 
      if(strcmp(str1,str2)==0)
        return 100;
      else return 420;
}
 
int main()
{    int t;
    scanf("%d",&t);
    char str[t][110],n[t];
    for(i=0;i<t;i++)
        scanf("%s",str[i]);
 
     for(i=0;i<t;i++)
     {
         n[i]=strlen(str[i]);
 
         if(n[i]%2!=0)
            printf("NO\n");
         else
         {
             res=chk(str[i]);
             if(res==100)
                printf("YES\n");
             else printf("NO\n");
         }
     }
}