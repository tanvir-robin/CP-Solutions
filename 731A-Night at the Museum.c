#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 
    int i,j,k,res=0,init=1,pos,cas1,cas2;
    char name[105];
    gets(name);
 
    k=strlen(name);
    for(i=0;i<k;i++)
    {
       pos=name[i]-96;
       cas1=abs(pos-init);
     //  printf("\ncas1=%d",cas1);
       if(pos>init)
        cas2=(26-pos)+init;
       else cas2=(26-init)+pos;
     //  printf("\ncas2=%d",cas2);
 
       if(cas1<cas2)
           res+=cas1;
       else res+=cas2;
 
        init=pos;
    }
    printf("%d\n",res);
 
}