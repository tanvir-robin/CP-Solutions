#include<stdio.h>
 
int main()
{
    int t,i,j,k,big;
    scanf("%d",&t);
    int a[t],b[t],c[t];
    
    for(i=0;i<t;i++)
      scanf("%d %d %d",&a[i],&b[i],&c[i]);
    
    
    for(i=0;i<t;i++)
     {   k=0;
        
      big= a[i]>=b[i] && a[i]>=c[i]? a[i] : b[i]>=c[i] && b[i]>=a[i]?  b[i] : c[i]>=a[i] && c[i]>=b[i]?  c[i] : 0;
      
     // printf("%d is the biggest\n",big);
     
       if(a[i]==big)
         k++;
        
         if(b[i]==big)
         k++;
        
     if(c[i]==big)
         k++;
        
        
        if(k>1)
         {
        printf("%d %d %d\n",(big-a[i]+1),(big-b[i]+1),(big-c[i]+1));
        
          }
        else 
        {
          //a
          if(a[i]==big)
            printf("0 ");
         else printf("%d ",big-a[i]+1);
        
        
        if(b[i]==big)
            printf("0 ");
         else printf("%d ",big-b[i]+1);
        
        
        if(c[i]==big)
            printf("0 \n");
         else printf("%d\n",big-c[i]+1);
        }
    
     }
    
}