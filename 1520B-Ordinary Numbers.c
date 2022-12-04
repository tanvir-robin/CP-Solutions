#include<stdio.h>
#include<math.h>
 
int main()
{
    long long t,i,j,k,l,comp=0,tmp,sum=0,count,init;
    scanf("%lli",&t);
    long r[1000],n[t];
 
    for(i=0;i<t;i++)
     scanf("%lli",&n[i]);
    
    
    for(l=0;l<t;l++)
    { comp=sum=0;
      tmp=n[l];
     count=-1;
    while(tmp!=0)
    {
       tmp=tmp/10;
       count++;
    }
    
    
    init=n[l]/pow(10,count);
    
    sum=(9*count)+(init-1);
    
    for(i=0;i<=count;i++)
       comp=(comp*10)+init;
    
    if(n[l]>=comp)
       sum++;
    
    printf("\n%lli",sum);
    }
    
  
}