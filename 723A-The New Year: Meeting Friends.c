#include<stdio.h>
#include<string.h>
 
int main()
{
   int n[5],av,d[5], res,i,j, temp;
   scanf("%d %d %d",&n[1],&n[2],&n[3]);
 
  for(i=1; i<=3; i++)
  {
      for(j=i+1; j<=3; j++)
        {
          if(n[i]>n[j])
             {
               temp = n[i];
               n[i] = n[j];
               n[j] = temp;
            
            }
        
        }
 
}
 
   res = abs(n[1]-n[2])+abs(n[3]-n[2]);
 
 
  printf("\n%d", res);
  
 
   
 
 
   
}