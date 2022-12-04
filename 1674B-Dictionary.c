#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{ int t,i,j,k,temp,a,b,res;
   scanf("%d",&t);
char word[t][5];
 
 
  for(i=0;i<t;i++)
    scanf("%s",&word[i]);
 
 
 
  for(i=0;i<t;i++)
  {
      a=word[i][0]-96;
      b=word[i][1]-96;
 
      if(a<b)
        res=((a-1)*25)+(b-1);
      else res=((a-1)*25)+(b);
 
      printf("%d\n",res);
  }
}