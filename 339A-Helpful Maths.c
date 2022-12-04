#include<stdio.h>
#include<string.h>
 
int main()
{
char ch[250];
scanf("%s", &ch);
 
int i,k,cp1=0,cp2=0, c1=0,c2=0,c3=0, ce1=0, ce2=0;
 
 
 
for(i=0; i<=strlen(ch)-1; i=i+2)
{
if(ch[i]=='1')
c1=c1+1;
else if(ch[i]=='2')
c2=c2+1;
else
c3=c3+1;
 
}
 for(k=0; k<c1; k++)
{
  ce1=ce1+1;
 if(k==c1-1)
    {
        printf("1");
    }
  else
  {
       printf("1+");
  }
 
 ce1=ce1+1;
 
}
 
 
for(k=0; k<c2; k++)
{
 
 
while(cp1!=1)
    {
        if(ce1>0){
            printf("+");
        }
 
        cp1=cp1+1;
    }
 
 
 
 
 if(k==c2-1)
    {
        printf("2");
    }
  else
  {
       printf("2+");
  }
 
  ce2= ce2+1;
 
 
}
 
 
for(k=0; k<c3; k++)
{
 
 
while(cp2!=1)
    {
        if(ce2>0 || ce1>0){
            printf("+");
        }
 
        cp2=cp2+1;
    }
 
    if(k==c3-1)
    {
        printf("3");
    }
  else
  {
       printf("3+");
  }
 
 
}
 
 
 
 
 
 
}