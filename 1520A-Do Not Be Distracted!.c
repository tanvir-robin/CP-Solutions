#include<stdio.h>
#include<string.h>
 
int main()
{
   int t,i,j,k,l;
   scanf("%d",&t);
   char ch[t][50];
   int n[t],count[t];
 
   for(i=0; i<t; i++)
   {   // Input sections
 
       scanf("%d",&n[i]);
         scanf("%s",&ch[i]);
 
 
      //matching starts here
count[i]=0;
       for(j=0;j<n[i];j++)
       {
           for(k=j+1;k<n[i];k++)
           {
               if(ch[i][j]!=ch[i][k])
            {   l=k;
            for(l=l+1; l<n[i];l++)
           {
               if(ch[i][j]==ch[i][l])
                   count[i]++;
 
           }
           }
           }
 
 
       }
 
 
 
   }
for(i=0; i<t; i++)
{
    if(count[i]!=0)
        printf("\nNO");
    else
        printf("\nYES");
}
 
}