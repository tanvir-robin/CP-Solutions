#include<stdio.h>
#include<string.h>
#include<math.h>
 
 
int main()
{
 
 int t,i,j;
 scanf("%d",&t);
 int time[t][2];
 
 for(i=0;i<t;i++)
    scanf("%d %d",&time[i][0],&time[i][1]);
 
 for(i=0;i<t;i++)
 {
     printf("\n%d",1440-((time[i][0]*60)+time[i][1]));
 }
}