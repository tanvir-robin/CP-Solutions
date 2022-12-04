#include<stdio.h>
#include<string.h>
#include<math.h>
 
 
int main()
{
    int t,i,j,suma=0,sumb=0;
    scanf("%d",&t);
    int n[t+10],member;
 
    //input
    for(i=0;i<t;i++)
      scanf("%d",&n[i]);
 
 
    //process
     for(i=0;i<t;i++)
     {  suma=sumb=0;
       member=n[i]/2;
       //suma adding
       suma+=pow(2,n[i]);
       for(j=1;j<=member-1;j++)
        suma+=pow(2,j);
 
        //sumb adding
        for(j=member;j<n[i];j++)
            sumb+=pow(2,j);
 
 
        printf("\n%d",abs(suma-sumb));
     }
}