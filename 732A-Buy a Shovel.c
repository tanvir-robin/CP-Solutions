#include<stdio.h>
 
int main()
{
   int p,n,i,j,res;
   scanf("%d %d", &p, &n);
 
 
 
 
for(i=1; i<=10000000000000009; i++)
  {
    res = p*i;
    
    
    if(res%10==0)
       { printf("%d",i);
    break;
    }
    else 
    {
      if(res%10==n)
    {
    printf("%d",i);
    break;
    }
        else
        continue;
    
    }
 
}
 
 
 
 
 
}