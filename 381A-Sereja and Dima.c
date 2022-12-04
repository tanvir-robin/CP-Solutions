#include<stdio.h>
#include<string.h>
 
int main()
{
  int t,i,j,s1=0,s2=0,taking;
  scanf("%d",&t);
  int card[t+1];
  int s=1,e=t;
  for(i=1;i<=t;i++)
    scanf("%d",&card[i]);
 
    for(i=1;i<=t;i++)
    {
        if(card[s]>card[e])
        {
            taking=card[s];
            s++;
        }
        else
        {
            taking=card[e];
            e--;
        }
 
        if(i%2!=0)
            s1+=taking;
        else
            s2+=taking;
    }
 
    printf("\n%d %d",s1,s2);
}