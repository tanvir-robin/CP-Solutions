#include<stdio.h>
 
int main()
{
    int t,i,j,k,sum,sum1,tmp;
    scanf("%d",&t);
    int choc[t][4];
    
    for(i=0;i<t;i++)
    {
    
    scanf("%d %d %d %d",&choc[i][0],&choc[i][1],&choc[i][2],&choc[i][3]);
    
    }
    
    for(i=0;i<t;i++)
    {
    
    
    for(j=0;j<3;j++)
    {
      for(k=j+1;k<3;k++)
    {
    
    if(choc[i][j]>choc[i][k])
      {
       tmp=choc[i][j];
       choc[i][j]=choc[i][k];
       choc[i][k]=tmp;
   
    
    }
 
    
    }
    }
    
    
    
    
    
    
    
    
    sum1=(choc[i][2]-choc[i][0])+(choc[i][2]-choc[i][1]);
    sum=choc[i][0]+choc[i][1]+choc[i][2]+choc[i][3];
       
        if(sum%3==0 && sum1<=choc[i][3])
          printf("\nYES");
        else
         printf("\nNO");
    }
    
}