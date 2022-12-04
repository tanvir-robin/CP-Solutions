#include<stdio.h>
 
int main()
{
     int n,i,j,k,g;
    scanf("%d",&n);
    int t[5];
    
    for(i=1; i<=900000; i++)
    {    
    
       n=n+1;
    g=n;
      for(j=1; j<=4; j++)
       {  
    
         
         t[j] = g%10;
          
         g=g/10;
         
       }
    
           
        if(t[1]==t[2] || t[1]==t[3] || t[1]==t[4])
           continue;
        else if(t[2]==t[3] || t[2]==t[4])
           continue;
    
      else if(t[3]==t[4])
           continue;
        else 
        break;
       
      
    
    
   
    }
    
    printf("%d", n);
    
}