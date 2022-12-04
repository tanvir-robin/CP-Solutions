#include<stdio.h>
 
int main()
{
    int t,i,j,k;
    scanf("%d",&t);
    int cand[t+10][105],n[t+10];
    for(i=0;i<t;i++)
    {
       scanf("%d",&n[i]);
     for(j=0;j<n[i];j++)
       scanf("%d",&cand[i][j]);
    
    }
 
int sum=0,div,count=0;
 
// processing
for(i=0;i<t;i++)
{  sum=0;
 for(j=0;j<n[i];j++)
   sum+=cand[i][j];
 
 if(sum%2==0)
  {
    if((sum/2)%2==0)
     printf("\nYES");
    else
      {  count=0;
        for(j=0;j<n[i];j++)
           { 
        if(cand[i][j]==1)
                 count++;
        }
       
        
        if(2<=count)
          printf("\nYES");
        else
           printf("\nNO");
        
    }
 
 
  }
else 
  printf("\nNO");
 
}
 
 
 
 
}